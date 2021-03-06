#pragma once

#define CTS_MAKE_VERSION(major, minor, patch) (\
    (((uint32_t)(major)) << 22) |\
    (((uint32_t)(minor)) << 12) |\
    (((uint32_t)(patch)) <<  0)\
)

#define CTS_VERSION_MAJOR(version)          (((uint32_t)(version) >> 22))
#define CTS_VERSION_MINOR(version)          (((uint32_t)(version) >> 12) & 0x3ff)
#define CTS_VERSION_PATCH(version)          (((uint32_t)(version) >>  0) & 0xfff))

#define CTS_API_VERSION_1_0                 CTS_MAKE_VERSION(1, 0, 0)
#define CTS_NULL_HANDLE                     (NULL)
#define CTS_TRUE                            (true)
#define CTS_FALSE                           (false)
#define CTS_SUBPASS_EXTERNAL                (0xFFFFFFFF)
#define CTS_MAX_EXTENSION_NAME_SIZE 	    (0xFF)
#define CTS_MAX_PHYSICAL_DEVICE_NAME_SIZE   (0xFF)
#define CTS_ARRAY_SIZE(a)                   (sizeof(a) / sizeof(a[0]))
#define CTS_MAX_MEMORY_TYPES                (32)
#define CTS_MAX_MEMORY_HEAPS                (16)
#define CTS_UUID_SIZE                       (16)
#define CTS_QUEUE_FAMILY_IGNORED            (~0)
#define CTS_ATTACHMENT_UNUSED               (~0)
