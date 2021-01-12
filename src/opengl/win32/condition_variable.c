#include <windows.h>
#include <cts/condition_variable.h>
#include <private/condition_variable_private.h>
#include <private/mutex_private.h>

#ifdef __cplusplus
extern "C" {
#endif

CtsResult ctsCreateConditionVariables(
    const CtsConditionVariableCreateInfo* pCreateInfo,
    const CtsAllocationCallbacks* pAllocator,
    CtsConditionVariable* pConditionVariable
) {
    CtsConditionVariable conditionVariable = ctsAllocation(
        pAllocator,
        sizeof(struct CtsConditionVariable),
        alignof(struct CtsConditionVariable),
        CTS_SYSTEM_ALLOCATION_SCOPE_OBJECT
    );

    if (conditionVariable == NULL) {
        return CTS_ERROR_OUT_OF_HOST_MEMORY;
    }

    InitializeConditionVariable(&conditionVariable->conditionVariable);
    *pConditionVariable = conditionVariable;

    return CTS_SUCCESS;
}

void ctsDestroyConditionVariable(
    CtsConditionVariable pConditionVariable,
    const CtsAllocationCallbacks* pAllocator
) {
    if (pConditionVariable != NULL) {
        ctsFree(pAllocator, pConditionVariable);
    }
}

void ctsConditionVariableSleep(
    CtsConditionVariable pConditionVariable,
    CtsMutex pMutex
) {
    if (pConditionVariable != NULL && pMutex != NULL) {
        SleepConditionVariableCS(
            &pConditionVariable->conditionVariable,
            &pMutex->criticalSection,
            INFINITE
        );
    }
}

void ctsConditionVariableWake(
    CtsConditionVariable pConditionVariable
) {
    WakeConditionVariable(&pConditionVariable->conditionVariable);
}

void ctsConditionVariableWakeAll(
    CtsConditionVariable pConditionVariable
) {
    WakeAllConditionVariable(&pConditionVariable->conditionVariable);
}

#ifdef __cplusplus
}
#endif