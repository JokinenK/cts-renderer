#include <stddef.h>
#include <cts/instance.h>
#include <private/instance_private.h>
#include <private/physical_device_private.h>

#ifdef __cplusplus
extern "C" {
#endif

CtsResult ctsCreateInstance(
    const CtsInstanceCreateInfo* pCreateInfo,
    const CtsAllocationCallbacks* pAllocator,
    CtsInstance* pInstance
) {
    CtsInstance instance = ctsAllocation(
        pAllocator,
        sizeof(struct CtsInstance),
        alignof(struct CtsInstance),
        CTS_SYSTEM_ALLOCATION_SCOPE_INSTANCE
    ); 

    if (instance == NULL) {
        return CTS_ERROR_OUT_OF_HOST_MEMORY;
    }

    CtsPhysicalDevice physicalDevice = &instance->physicalDevice;
    physicalDevice->instance = instance;

    CtsQueueFamilyProperties* queueFamilyProperties = &instance->queueFamilyProperties;
    queueFamilyProperties->queueCount = 1;
    queueFamilyProperties->timestampValidBits = 1;
    queueFamilyProperties->minImageTransferGranularity.width = 0;
    queueFamilyProperties->minImageTransferGranularity.height = 0;
    queueFamilyProperties->minImageTransferGranularity.depth = 0;
    queueFamilyProperties->queueFlags = 
        CTS_QUEUE_GRAPHICS_BIT | 
        CTS_QUEUE_COMPUTE_BIT  | 
        CTS_QUEUE_TRANSFER_BIT | 
        CTS_QUEUE_SPARSE_BINDING_BIT; 

    instance->surface = NULL;
    *pInstance = instance;
    return CTS_SUCCESS;
}

CtsResult ctsDestroyInstance(
    CtsInstance pInstance,
    const CtsAllocationCallbacks* pAllocator
) {
    if (pInstance != NULL) {
        ctsFree(pAllocator, pInstance);
    }

    return CTS_SUCCESS;
}

CtsResult ctsEnumeratePhysicalDevices(
    CtsInstance pInstance,
    uint32_t* pPhysicalDeviceCount,
    CtsPhysicalDevice* pPhysicalDevices
) {
    if (pPhysicalDeviceCount != NULL) {
        *pPhysicalDeviceCount = 1;
    }

    if (pPhysicalDevices != NULL) {
        *pPhysicalDevices = &pInstance->physicalDevice;
    }

    return CTS_SUCCESS;
}

CtsResult ctsGetPhysicalDeviceQueueFamilyProperties(
    CtsPhysicalDevice pPhysicalDevice,
    uint32_t* pQueueFamilyPropertyCount,
    CtsQueueFamilyProperties* pQueueFamilyProperties
) {
    if (pQueueFamilyPropertyCount != NULL) {
        *pQueueFamilyPropertyCount = 1;
    }

    if (pQueueFamilyProperties != NULL) {
        *pQueueFamilyProperties = pPhysicalDevice->instance->queueFamilyProperties;
    }

    return CTS_SUCCESS;
}

#ifdef __cplusplus
}
#endif