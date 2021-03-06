#pragma once

#include <cts/typedefs/flags.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef CtsFlags CtsBufferUsageFlags;
typedef enum CtsBufferUsageFlagBits {
    CTS_BUFFER_USAGE_TRANSFER_SRC_BIT           = 0x00000001,
    CTS_BUFFER_USAGE_TRANSFER_DST_BIT           = 0x00000002,
    CTS_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT   = 0x00000004,
    CTS_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT   = 0x00000008,
    CTS_BUFFER_USAGE_UNIFORM_BUFFER_BIT         = 0x00000010,
    CTS_BUFFER_USAGE_STORAGE_BUFFER_BIT         = 0x00000020,
    CTS_BUFFER_USAGE_INDEX_BUFFER_BIT           = 0x00000040,
    CTS_BUFFER_USAGE_VERTEX_BUFFER_BIT          = 0x00000080,
    CTS_BUFFER_USAGE_INDIRECT_BUFFER_BIT        = 0x00000100
} CtsBufferUsageFlagBits;

#ifdef __cplusplus
}
#endif

