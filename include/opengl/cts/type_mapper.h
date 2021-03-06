#pragma once

#include <glad/glad.h>
#include <cts/types.h>
#include <cts/typedefs/gl_rasterization_state_changes.h>
#include <cts/typedefs/gl_depth_stencil_state_changes.h>
#include <cts/typedefs/gl_color_blend_state_changes.h>
#include <cts/typedefs/gl_pipeline.h>
#include <cts/typedefs/gl_enums.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CtsFormatData {
    GLenum format;
    GLenum type;
    GLenum internalFormat;
    GLint numComponents;
    GLboolean normalized;
} CtsFormatData;

const GLenum parseCompareOp(CtsCompareOp value);
const GLenum parseStencilOp(CtsStencilOp value);
const GLuint parseCullMode(CtsCullModeFlags value);
const GLenum parseFrontFace(CtsFrontFace value);
const GLenum parsePrimitiveTopology(CtsPrimitiveTopology value);
const GLenum parsePolygonMode(CtsPolygonMode value);
const GLenum parseSamplerAddressMode(CtsSamplerAddressMode value);
const GLenum parseMinFilter(CtsFilter filter, CtsSamplerMipmapMode mipmapMode);
const GLenum parseMagFilter(CtsFilter filter, CtsSamplerMipmapMode mipmapMode);
const GLenum parseShaderType(CtsShaderStageFlagBits value);
const GLenum parseImageType(CtsImageType value, bool isMultisample, bool isArray);
const GLenum parseImageViewType(CtsImageViewType value, bool isMultisample);
const GLenum parseBufferUsage(CtsBufferUsageFlags value);
const GLenum parseBlendFactor(CtsBlendFactor value);
const GLenum parseBlendOperation(CtsBlendOp value);
const GLenum parseLogicOp(CtsLogicOp value);
const bool isFloatBorderColor(CtsBorderColor borderColor);
const float* parseBorderColorFloat(CtsBorderColor borderColor);
const int* parseBorderColorInt(CtsBorderColor borderColor);

const CtsFlags parseDynamicStateFlag(CtsDynamicState value);
const CtsFormatData parseFormat(CtsFormat value);

bool blendStateBlendConstantChanged(
    const CtsGlPipelineColorBlendState* pLhs,
    const CtsGlPipelineColorBlendState* pRhs
);

void parseRasterizationStateChanges(
    const CtsGlPipelineRasterizationState* pLhs, 
    const CtsGlPipelineRasterizationState* pRhs, 
    CtsGlRasterizationStateChanges* pChanges
);

void parseDepthStencilStateChanges(
    const CtsGlPipelineDepthStencilState* pLhs, 
    const CtsGlPipelineDepthStencilState* pRhs, 
    CtsGlDepthStencilStateChanges* pChanges
);

void parseColorBlendStateChanges(
    const CtsGlPipelineColorBlendStateAttachment* pLhs, 
    const CtsGlPipelineColorBlendStateAttachment* pRhs, 
    CtsGlColorBlendStateChanges* pChanges
);

CtsFlagBit parseDynamicStateFlagBits(
    const CtsPipelineDynamicStateCreateInfo* pCreateInfo
);

#ifdef __cplusplus
}
#endif