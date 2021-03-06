#pragma once

#include <cts/allocator.h>
#include <cts/types.h>
#include <cts/commanddefs/cmd_base.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CtsDestroyFence {
    CtsCmdBase base;
    CtsDevice device;
    CtsFence fence;
    const CtsAllocationCallbacks* pAllocator;
} CtsDestroyFence;

#ifdef __cplusplus
}
#endif