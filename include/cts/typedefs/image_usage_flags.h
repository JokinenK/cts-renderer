#pragma once

#include <cts/typedefs/flags.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef CtsFlags CtsImageUsageFlags;
typedef enum CtsImageUsageFlagBits {
    CTS_IMAGE_USAGE_TRANSFER_SRC_BIT                = 0x00000001,
    CTS_IMAGE_USAGE_TRANSFER_DST_BIT                = 0x00000002,
    CTS_IMAGE_USAGE_SAMPLED_BIT                     = 0x00000004,
    CTS_IMAGE_USAGE_STORAGE_BIT                     = 0x00000008,
    CTS_IMAGE_USAGE_COLOR_ATTACHMENT_BIT            = 0x00000010,
    CTS_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT    = 0x00000020,
    CTS_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT        = 0x00000040,
    CTS_IMAGE_USAGE_INPUT_ATTACHMENT_BIT            = 0x00000080,
} CtsImageUsageFlagBits;

#ifdef __cplusplus
}
#endif