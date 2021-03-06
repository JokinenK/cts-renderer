#pragma once

#include <cts/allocator.h>
#include <cts/types.h>
#include <cts/commanddefs/cmd_base.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CtsDestroyFramebuffer {
    CtsCmdBase base;
    CtsDevice device;
    CtsFramebuffer framebuffer;
    const CtsAllocationCallbacks* pAllocator;
} CtsDestroyFramebuffer;

#ifdef __cplusplus
}
#endif