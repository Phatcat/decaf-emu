#pragma once
#include "latte/latte_enum_sq.h"
#include <addrlib/addrinterface.h>

namespace gpu
{

ADDR_HANDLE
getAddrLibHandle();

bool
copySurfacePixels(uint8_t *dstBasePtr,
                  uint32_t dstWidth,
                  uint32_t dstHeight,
                  ADDR_COMPUTE_SURFACE_ADDRFROMCOORD_INPUT &dstAddrInput,
                  uint8_t *srcBasePtr,
                  uint32_t srcWidth,
                  uint32_t srcHeight,
                  ADDR_COMPUTE_SURFACE_ADDRFROMCOORD_INPUT &srcAddrInput);

bool
convertFromTiled(uint8_t *output,
                 uint32_t outputPitch,
                 uint8_t *input,
                 latte::SQ_TILE_MODE tileMode,
                 uint32_t swizzle,
                 uint32_t pitch,
                 uint32_t width,
                 uint32_t height,
                 uint32_t depth,
                 uint32_t aa,
                 bool isDepth,
                 uint32_t bpp);

} // namespace gpu
