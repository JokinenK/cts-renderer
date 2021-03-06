#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef enum CtsResult {
    CTS_SUCCESS = 0,
    CTS_NOT_READY = 1,
    CTS_TIMEOUT = 2,
    CTS_EVENT_SET = 3,
    CTS_EVENT_RESET = 4,
    CTS_INCOMPLETE = 5,
    CTS_ERROR_OUT_OF_HOST_MEMORY = -1,
    CTS_ERROR_OUT_OF_DEVICE_MEMORY = -2,
    CTS_ERROR_INITIALIZATION_FAILED = -3,
    CTS_ERROR_DEVICE_LOST = -4,
    CTS_ERROR_MEMORY_MAP_FAILED = -5,
    CTS_ERROR_LAYER_NOT_PRESENT = -6,
    CTS_ERROR_EXTENSION_NOT_PRESENT = -7,
    CTS_ERROR_FEATURE_NOT_PRESENT = -8,
    CTS_ERROR_INCOMPATIBLE_DRIVER = -9,
    CTS_ERROR_TOO_MANY_OBJECTS = -10,
    CTS_ERROR_FORMAT_NOT_SUPPORTED = -11,
    CTS_ERROR_FRAGMENTED_POOL = -12,
    CTS_ERROR_UNKNOWN = -13,

    CTS_SUBOPTIMAL = 1000001003,
    CTS_ERROR_OUT_OF_DATE = -1000001004,
} CtsResult;

typedef enum CtsPhysicalDeviceType {
    CTS_PHYSICAL_DEVICE_TYPE_OTHER = 0,
    CTS_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU = 1,
    CTS_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU = 2,
    CTS_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU = 3,
    CTS_PHYSICAL_DEVICE_TYPE_CPU = 4,
} CtsPhysicalDeviceType;

typedef enum CtsFilter {
    CTS_FILTER_NEAREST = 0,
    CTS_FILTER_LINEAR = 1,

    NUM_CTS_FILTERS
} CtsFilter;

typedef enum CtsSamplerMipmapMode {
    CTS_SAMPLER_MIPMAP_MODE_NEAREST = 0,
    CTS_SAMPLER_MIPMAP_MODE_LINEAR = 1,

    NUM_CTS_SAMPLER_MIPMAP_MODES
} CtsSamplerMipmapMode;

typedef enum CtsSamplerAddressMode  {
    CTS_SAMPLER_ADDRESS_MODE_REPEAT = 0,
    CTS_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT = 1,
    CTS_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE = 2,
    CTS_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER = 3,

    NUM_CTS_SAMPLER_ADDRESS_MODES
} CtsSamplerAddressMode;

typedef enum CtsFrontFace {
    CTS_FRONT_FACE_CLOCKWISE = 0,
    CTS_FRONT_FACE_COUNTER_CLOCKWISE = 1,

    NUM_CTS_FRONT_FACES
} CtsFrontFace;

typedef enum CtsPolygonMode {
    CTS_POLYGON_MODE_POINT = 0,
    CTS_POLYGON_MODE_LINE = 1,
    CTS_POLYGON_MODE_FILL = 2,

    NUM_CTS_POLYGON_MODES
} CtsPolygonMode;

typedef enum CtsPrimitiveTopology {
    CTS_PRIMITIVE_TOPOLOGY_POINT_LIST = 0,
    CTS_PRIMITIVE_TOPOLOGY_LINE_LIST = 1,
    CTS_PRIMITIVE_TOPOLOGY_LINE_STRIP = 2,
    CTS_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST = 3,
    CTS_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP = 4,
    CTS_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN = 5,
    CTS_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY = 6,
    CTS_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY = 7,
    CTS_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY = 8,
    CTS_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY = 9,
    CTS_PRIMITIVE_TOPOLOGY_PATCH_LIST = 10,

    NUM_CTS_PRIMITIVE_TOPOLOGIES
} CtsPrimitiveTopology;

typedef enum CtsCompareOp {
    CTS_COMPARE_OP_NEVER = 0,
    CTS_COMPARE_OP_LESS = 1,
    CTS_COMPARE_OP_EQUAL = 2,
    CTS_COMPARE_OP_LESS_OR_EQUAL = 3,
    CTS_COMPARE_OP_CREATER = 4,
    CTS_COMPARE_OP_NOT_EQUAL = 5,
    CTS_COMPARE_OP_GREATER_OR_EQUAL = 6,
    CTS_COMPARE_OP_ALWAYS = 7,

    NUM_CTS_COMPARE_OPS
} CtsCompareOp;

typedef enum CtsStencilOp {
    CTS_STENCIL_OP_KEEP = 0,
    CTS_STENCIL_OP_ZERO = 1,
    CTS_STENCIL_OP_REPLACE = 2,
    CTS_STENCIL_OP_INCREMENT_AND_CLAMP = 3,
    CTS_STENCIL_OP_DECREMENT_AND_CLAMP = 4,
    CTS_STENCIL_OP_INVERT = 5,
    CTS_STENCIL_OP_INCREMENT_AND_WRAP = 6,
    CTS_STENCIL_OP_DECREMENT_AND_WRAP = 7,

    NUM_CTS_STENCIL_OPS
} CtsStencilOp;

typedef enum CtsFormat {
    CTS_FORMAT_UNDEFINED,

    CTS_FORMAT_R4G4B4A4_UNORM_PACK16,
    CTS_FORMAT_B4G4R4A4_UNORM_PACK16,

    CTS_FORMAT_R5G6B5_UNORM_PACK16,
    CTS_FORMAT_B5G6R5_UNORM_PACK16,

    CTS_FORMAT_R5G5B5A1_UNORM_PACK16,
    CTS_FORMAT_B5G5R5A1_UNORM_PACK16,
    CTS_FORMAT_A1R5G5B5_UNORM_PACK16,

    CTS_FORMAT_R8_UNORM,
    CTS_FORMAT_R8_SNORM,
    CTS_FORMAT_R8_USCALED,
    CTS_FORMAT_R8_SSCALED,
    CTS_FORMAT_R8_UINT,
    CTS_FORMAT_R8_SINT,

    CTS_FORMAT_R8G8_UNORM,
    CTS_FORMAT_R8G8_SNORM,
    CTS_FORMAT_R8G8_USCALED,
    CTS_FORMAT_R8G8_SSCALED,
    CTS_FORMAT_R8G8_UINT,
    CTS_FORMAT_R8G8_SINT,

    CTS_FORMAT_R8G8B8_UNORM,
    CTS_FORMAT_R8G8B8_SNORM,
    CTS_FORMAT_R8G8B8_USCALED,
    CTS_FORMAT_R8G8B8_SSCALED,
    CTS_FORMAT_R8G8B8_UINT,
    CTS_FORMAT_R8G8B8_SINT,
    CTS_FORMAT_R8G8B8_SRGB,

    CTS_FORMAT_B8G8R8_UNORM,
    CTS_FORMAT_B8G8R8_SNORM,
    CTS_FORMAT_B8G8R8_USCALED,
    CTS_FORMAT_B8G8R8_SSCALED,
    CTS_FORMAT_B8G8R8_UINT,
    CTS_FORMAT_B8G8R8_SINT,

    CTS_FORMAT_R8G8B8A8_UNORM,
    CTS_FORMAT_R8G8B8A8_SNORM,
    CTS_FORMAT_R8G8B8A8_USCALED,
    CTS_FORMAT_R8G8B8A8_SSCALED,
    CTS_FORMAT_R8G8B8A8_UINT,
    CTS_FORMAT_R8G8B8A8_SINT,
    CTS_FORMAT_R8G8B8A8_SRGB,

    CTS_FORMAT_B8G8R8A8_UNORM,
    CTS_FORMAT_B8G8R8A8_SNORM,
    CTS_FORMAT_B8G8R8A8_USCALED,
    CTS_FORMAT_B8G8R8A8_SSCALED,
    CTS_FORMAT_B8G8R8A8_UINT,
    CTS_FORMAT_B8G8R8A8_SINT,
    CTS_FORMAT_B8G8R8A8_SRGB,

    CTS_FORMAT_A8B8G8R8_UNORM_PACK32,
    CTS_FORMAT_A8B8G8R8_SNORM_PACK32,
    CTS_FORMAT_A8B8G8R8_USCALED_PACK32,
    CTS_FORMAT_A8B8G8R8_SSCALED_PACK32,
    CTS_FORMAT_A8B8G8R8_UINT_PACK32,
    CTS_FORMAT_A8B8G8R8_SINT_PACK32,
    CTS_FORMAT_A8B8G8R8_SRGB_PACK32,

    CTS_FORMAT_A2B10G10R10_UNORM_PACK32,
    CTS_FORMAT_A2B10G10R10_SNORM_PACK32,
    CTS_FORMAT_A2B10G10R10_USCALED_PACK32,
    CTS_FORMAT_A2B10G10R10_SSCALED_PACK32,
    CTS_FORMAT_A2B10G10R10_UINT_PACK32,
    CTS_FORMAT_A2B10G10R10_SINT_PACK32,

    CTS_FORMAT_R16_UNORM,
    CTS_FORMAT_R16_SNORM,
    CTS_FORMAT_R16_USCALED,
    CTS_FORMAT_R16_SSCALED,
    CTS_FORMAT_R16_UINT,
    CTS_FORMAT_R16_SINT,
    CTS_FORMAT_R16_SFLOAT,

    CTS_FORMAT_R16G16_UNORM, 
    CTS_FORMAT_R16G16_SNORM,
    CTS_FORMAT_R16G16_USCALED, 
    CTS_FORMAT_R16G16_SSCALED,
    CTS_FORMAT_R16G16_UINT,
    CTS_FORMAT_R16G16_SINT,
    CTS_FORMAT_R16G16_SFLOAT,

    CTS_FORMAT_R16G16B16_UNORM,
    CTS_FORMAT_R16G16B16_SNORM,
    CTS_FORMAT_R16G16B16_USCALED,
    CTS_FORMAT_R16G16B16_SSCALED,
    CTS_FORMAT_R16G16B16_UINT,
    CTS_FORMAT_R16G16B16_SINT,
    CTS_FORMAT_R16G16B16_SFLOAT,

    CTS_FORMAT_R16G16B16A16_UNORM,
    CTS_FORMAT_R16G16B16A16_SNORM,
    CTS_FORMAT_R16G16B16A16_USCALED,
    CTS_FORMAT_R16G16B16A16_SSCALED,
    CTS_FORMAT_R16G16B16A16_UINT,
    CTS_FORMAT_R16G16B16A16_SINT,
    CTS_FORMAT_R16G16B16A16_SFLOAT,

    CTS_FORMAT_R32_UINT,
    CTS_FORMAT_R32_SINT,
    CTS_FORMAT_R32_USCALED,
    CTS_FORMAT_R32_SSCALED,
    CTS_FORMAT_R32_SFLOAT,

    CTS_FORMAT_R32G32_UINT,
    CTS_FORMAT_R32G32_SINT,
    CTS_FORMAT_R32G32_USCALED,
    CTS_FORMAT_R32G32_SSCALED,
    CTS_FORMAT_R32G32_SFLOAT,

    CTS_FORMAT_R32G32B32_UINT,
    CTS_FORMAT_R32G32B32_SINT,
    CTS_FORMAT_R32G32B32_USCALED,
    CTS_FORMAT_R32G32B32_SSCALED,
    CTS_FORMAT_R32G32B32_SFLOAT,

    CTS_FORMAT_R32G32B32A32_UINT,
    CTS_FORMAT_R32G32B32A32_SINT,
    CTS_FORMAT_R32G32B32A32_USCALED,
    CTS_FORMAT_R32G32B32A32_SSCALED,
    CTS_FORMAT_R32G32B32A32_SFLOAT,

    CTS_FORMAT_B10G11R11_UFLOAT_PACK32,
    CTS_FORMAT_E5B9G9R9_UFLOAT_PACK32,

    CTS_FORMAT_D16_UNORM,
    CTS_FORMAT_X8_D24_UNORM_PACK32,
    CTS_FORMAT_D32_SFLOAT,
    CTS_FORMAT_S8_UINT,
    CTS_FORMAT_D24_UNORM_S8_UINT,
    CTS_FORMAT_D32_SFLOAT_S8_UINT,

    NUM_CTS_FORMATS
} CtsFormat;

typedef enum CtsSharingMode {
    CTS_SHARING_MODE_EXCLUSIVE = 0,
    CTS_SHARING_MODE_CONCURRENT = 1,
} CtsSharingMode;

typedef enum CtsBlendFactor {
    CTS_BLEND_FACTOR_ZERO = 0,
    CTS_BLEND_FACTOR_ONE = 1,
    CTS_BLEND_FACTOR_SRC_COLOR = 2,
    CTS_BLEND_FACTOR_ONE_MINUS_SRC_COLOR = 3,
    CTS_BLEND_FACTOR_DST_COLOR = 4,
    CTS_BLEND_FACTOR_ONE_MINUS_DST_COLOR = 5,
    CTS_BLEND_FACTOR_SRC_ALPHA = 6,
    CTS_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA = 7,
    CTS_BLEND_FACTOR_DST_ALPHA = 8,
    CTS_BLEND_FACTOR_ONE_MINUS_DST_ALPHA = 9,
    CTS_BLEND_FACTOR_CONSTANT_COLOR = 10,
    CTS_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR = 11,
    CTS_BLEND_FACTOR_CONSTANT_ALPHA = 12,
    CTS_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA = 13,
    CTS_BLEND_FACTOR_SRC_ALPHA_SATURATE = 14,
    CTS_BLEND_FACTOR_SRC1_COLOR = 15,
    CTS_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR = 16,
    CTS_BLEND_FACTOR_SRC1_ALPHA = 17,
    CTS_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA = 18,

    NUM_CTS_BLEND_FACTORS
} CtsBlendFactor;

typedef enum CtsRenderTargetBind {
    CTS_RENDER_TARGET_BIND_READ,
    CTS_RENDER_TARGET_BIND_WRITE,
    CTS_RENDER_TARGET_BIND_READWRITE,

    NUM_CTS_RENDER_TARGET_BINDS
} CtsRenderTargetBind;

typedef enum CtsVertexInputRate {
    CTS_VERTEX_INPUT_RATE_VERTEX = 0,
    CTS_VERTEX_INPUT_RATE_INSTANCE = 1,

    NUM_CTS_VERTEX_INPUT_RATES
} CtsVertexInputRate;

typedef enum CtsLogicOp {
    CTS_LOGIC_OP_CLEAR = 0,
    CTS_LOGIC_OP_AND = 1,
    CTS_LOGIC_OP_AND_REVERSE = 2,
    CTS_LOGIC_OP_COPY = 3,
    CTS_LOGIC_OP_AND_INVERTED = 4,
    CTS_LOGIC_OP_NO_OP = 5,
    CTS_LOGIC_OP_XOR = 6,
    CTS_LOGIC_OP_OR = 7,
    CTS_LOGIC_OP_NOR = 8,
    CTS_LOGIC_OP_EQUIVALENT = 9,
    CTS_LOGIC_OP_INVERT = 10,
    CTS_LOGIC_OP_OR_REVERSE = 11,
    CTS_LOGIC_OP_COPY_INVERTED = 12,
    CTS_LOGIC_OP_OR_INVERTED = 13,
    CTS_LOGIC_OP_NAND = 14,
    CTS_LOGIC_OP_SET = 15,

    NUM_CTS_LOGIC_OPS
} CtsLogicOp;

typedef enum CtsBlendOp {
    CTS_BLEND_OP_ADD = 0,
    CTS_BLEND_OP_SUBTRACT = 1,
    CTS_BLEND_OP_REVERSE_SUBTRACT = 2,
    CTS_BLEND_OP_MIN = 3,
    CTS_BLEND_OP_MAX = 4,

    NUM_CTS_BLEND_OPS
} CtsBlendOp;

typedef enum CtsImageType {
    CTS_IMAGE_TYPE_1D = 0,
    CTS_IMAGE_TYPE_2D = 1,
    CTS_IMAGE_TYPE_3D = 2,

    NUM_CTS_IMAGE_TYPES
} CtsImageType;

typedef enum CtsImageViewType {
    CTS_IMAGE_VIEW_TYPE_1D = 0,
    CTS_IMAGE_VIEW_TYPE_2D = 1,
    CTS_IMAGE_VIEW_TYPE_3D = 2,
    CTS_IMAGE_VIEW_TYPE_CUBE = 3,
    CTS_IMAGE_VIEW_TYPE_1D_ARRAY = 4,
    CTS_IMAGE_VIEW_TYPE_2D_ARRAY = 5,
    CTS_IMAGE_VIEW_TYPE_CUBE_ARRAY = 6,

    NUM_CTS_IMAGE_VIEW_TYPES
} CtsImageViewType;

typedef enum CtsComponentSwizzle {
    CTS_COMPONENT_SWIZZLE_IDENTITY = 0,
    CTS_COMPONENT_SWIZZLE_ZERO = 1,
    CTS_COMPONENT_SWIZZLE_ONE = 2,
    CTS_COMPONENT_SWIZZLE_R = 3,
    CTS_COMPONENT_SWIZZLE_G = 4,
    CTS_COMPONENT_SWIZZLE_B = 5,
    CTS_COMPONENT_SWIZZLE_A = 6,

    NUM_CTS_COMPONENT_SWIZZLES
} CtsComponentSwizzle;

typedef enum CtsImageLayout {
    CTS_IMAGE_LAYOUT_UNDEFINED = 0,
    CTS_IMAGE_LAYOUT_GENERAL = 1,
    CTS_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL = 2,
    CTS_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL = 3,
    CTS_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL = 4,
    CTS_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL = 5,
    CTS_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL = 6,
    CTS_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL = 7,
    CTS_IMAGE_LAYOUT_PREINITIALIZED = 8,

    CTS_IMAGE_LAYOUT_PRESENT_SRC = 1000001002,
} CtsImageLayout;

typedef enum CtsDescriptorType {
    CTS_DESCRIPTOR_TYPE_SAMPLER = 0,
    CTS_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER = 1,
    CTS_DESCRIPTOR_TYPE_SAMPLED_IMAGE = 2,
    CTS_DESCRIPTOR_TYPE_STORAGE_IMAGE = 3,
    CTS_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER = 4,
    CTS_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER = 5,
    CTS_DESCRIPTOR_TYPE_UNIFORM_BUFFER = 6,
    CTS_DESCRIPTOR_TYPE_STORAGE_BUFFER = 7,
    CTS_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC = 8,
    CTS_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC = 9,
    CTS_DESCRIPTOR_TYPE_INPUT_ATTACHMENT = 10,

    NUM_CTS_DESCRIPTOR_TYPES
} CtsDescriptorType;

typedef enum CtsStructureType {
    CTS_STRUCTURE_TYPE_APPLICATION_INFO = 0,
    CTS_STRUCTURE_TYPE_INSTANCE_CREATE_INFO = 1,
    CTS_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO = 2,
    CTS_STRUCTURE_TYPE_DEVICE_CREATE_INFO = 3,
    CTS_STRUCTURE_TYPE_SUBMIT_INFO = 4,
    CTS_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO = 5,
    CTS_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE = 6,
    CTS_STRUCTURE_TYPE_BIND_SPARSE_INFO = 7,
    CTS_STRUCTURE_TYPE_FENCE_CREATE_INFO = 8,
    CTS_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO = 9,
    CTS_STRUCTURE_TYPE_EVENT_CREATE_INFO = 10,
    CTS_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO = 11,
    CTS_STRUCTURE_TYPE_BUFFER_CREATE_INFO = 12,
    CTS_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO = 13,
    CTS_STRUCTURE_TYPE_IMAGE_CREATE_INFO = 14,
    CTS_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO = 15,
    CTS_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO = 16,
    CTS_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO = 17,
    CTS_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO = 18,
    CTS_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO = 19,
    CTS_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO = 20,
    CTS_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO = 21,
    CTS_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO = 22,
    CTS_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO = 23,
    CTS_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO = 24,
    CTS_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO = 25,
    CTS_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO = 26,
    CTS_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO = 27,
    CTS_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO = 28,
    CTS_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO = 29,
    CTS_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO = 30,
    CTS_STRUCTURE_TYPE_SAMPLER_CREATE_INFO = 31,
    CTS_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO = 32,
    CTS_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO = 33,
    CTS_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO = 34,
    CTS_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET = 35,
    CTS_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET = 36,
    CTS_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO = 37,
    CTS_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO = 38,
    CTS_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO = 39,
    CTS_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO = 40,
    CTS_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO = 41,
    CTS_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO = 42,
    CTS_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO = 43,
    CTS_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER = 44,
    CTS_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER = 45,
    CTS_STRUCTURE_TYPE_MEMORY_BARRIER = 46,
    CTS_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO = 47,
    CTS_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO = 48,

    CTS_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO = 1000009000,
    CTS_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO = 1000001000,
    CTS_STRUCTURE_TYPE_PRESENT_INFO = 1000001001,
} CtsStructureType;

typedef enum CtsCommandBufferLevel {
    CTS_COMMAND_BUFFER_LEVEL_PRIMARY = 0,
    CTS_COMMAND_BUFFER_LEVEL_SECONDARY = 1,

    NUM_CTS_COMMAND_BUFFER_LEVELS
} CtsCommandBufferLevel;

typedef enum CtsAttachmentLoadOp {
    CTS_ATTACHMENT_LOAD_OP_LOAD = 0,
    CTS_ATTACHMENT_LOAD_OP_CLEAR = 1,
    CTS_ATTACHMENT_LOAD_OP_DONT_CARE = 2,

    NUM_CTS_ATTACHMENT_LOAD_OPS
} CtsAttachmentLoadOp;

typedef enum CtsAttachmentStoreOp {
    CTS_ATTACHMENT_STORE_OP_STORE = 0,
    CTS_ATTACHMENT_STORE_OP_DONT_CARE = 1,

    NUM_CTS_ATTACHMENTS_STORE_OPS
} CtsAttachmentStoreOp;

typedef enum CtsPipelineBindPoint {
    CTS_PIPELINE_BIND_POINT_GRAPHICS = 0,
    CTS_PIPELINE_BIND_POINT_COMPUTE = 1,

    NUM_CTS_PIPELINE_BIND_POINTS
} CtsPipelineBindPoint;

typedef enum CtsQueryType {
    CTS_QUERY_TYPE_OCCLUSION = 0,
    CTS_QUERY_TYPE_PIPELINE_STATISTICS = 1,
    CTS_QUERY_TYPE_TIMESTAMP = 2,

    NUM_CTS_QUERY_TYPES
} CtsQueryType;

typedef enum CtsSubpassContents {
    CTS_SUBPASS_CONTENTS_INLINE = 0,
    CTS_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS = 1,

    NUM_CTS_SUBPASS_CONTENTS
} CtsSubpassContents;

typedef enum CtsIndexType {
    CTS_INDEX_TYPE_UINT16 = 0,
    CTS_INDEX_TYPE_UINT32 = 1,

    NUM_CTS_INDEX_TYPES
} CtsIndexType;

typedef enum CtsDynamicState {
    CTS_DYNAMIC_STATE_VIEWPORT = 0,
    CTS_DYNAMIC_STATE_SCISSOR = 1,
    CTS_DYNAMIC_STATE_LINE_WIDTH = 2,
    CTS_DYNAMIC_STATE_DEPTH_BIAS = 3,
    CTS_DYNAMIC_STATE_BLEND_CONSTANTS = 4,
    CTS_DYNAMIC_STATE_DEPTH_BOUNDS = 5,
    CTS_DYNAMIC_STATE_STENCIL_COMPARE_MASK = 6,
    CTS_DYNAMIC_STATE_STENCIL_WRITE_MASK = 7,
    CTS_DYNAMIC_STATE_STENCIL_REFERENCE = 8,

    NUM_CTS_DYNAMIC_STATES
} CtsDynamicState;

typedef enum CtsBorderColor {
    CTS_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK = 0,
    CTS_BORDER_COLOR_INT_TRANSPARENT_BLACK = 1,
    CTS_BORDER_COLOR_FLOAT_OPAQUE_BLACK = 2,
    CTS_BORDER_COLOR_INT_OPAQUE_BLACK = 3,
    CTS_BORDER_COLOR_FLOAT_OPAQUE_WHITE = 4,
    CTS_BORDER_COLOR_INT_OPAQUE_WHITE = 5,

    NUM_CTS_BORDER_COLORS
} CtsBorderColor;

typedef enum CtsCommandBufferState {
    CTS_COMMAND_BUFFER_STATE_INITIAL = 0,
    CTS_COMMAND_BUFFER_STATE_RECORDING = 1,
    CTS_COMMAND_BUFFER_STATE_EXECUTABLE = 2,
    CTS_COMMAND_BUFFER_STATE_PENDING = 3,
    CTS_COMMAND_BUFFER_STATE_INVALID = 4,

    NUM_CTS_COMMAND_BUFFER_STATES,
} CtsCommandBufferState;

typedef enum CtsPresentMode {
    CTS_PRESENT_MODE_IMMEDIATE = 0,
    CTS_PRESENT_MODE_MAILBOX = 1,
    CTS_PRESENT_MODE_FIFO = 2,
    CTS_PRESENT_MODE_FIFO_RELAXED = 3,
} CtsPresentMode;

typedef enum CtsColorSpace {
    CTS_COLOR_SPACE_SRGB_NONLINEAR = 0,
} CtsColorSpace;

typedef enum CtsImageTiling {
    CTS_IMAGE_TILING_OPTIMAL = 0,
    CTS_IMAGE_TILING_LINEAR = 1,
} CtsImageTiling;

#ifdef __cplusplus
}
#endif