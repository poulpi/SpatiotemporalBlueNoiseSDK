/*
* Copyright (c) 2019-2021, NVIDIA CORPORATION.  All rights reserved.
*
* NVIDIA CORPORATION and its licensors retain all intellectual property
* and proprietary rights in and to this software, related documentation
* and any modifications thereto.  Any use, reproduction, disclosure or
* distribution of this software and related documentation without an express
* license agreement from NVIDIA CORPORATION is strictly prohibited.
*/

#include "../Shared/shared.h"
#include "Make.h"
#include <direct.h>

// Size of the texture generated
static const int c_imageSizeX = 64;
static const int c_imageSizeY = 64;
static const int c_imageSizeZ = 64;

static const float c_energySigma = 1.9f;
static const float c_valueSigma  = 1.0f;

static const float c_swapCountFactor = 0.001f;
static const float c_coolingFactor   = 0.00001f;

int main(int argc, char** argv)
{
    _mkdir("D:/STBN");

    //MakeMask<Make_Float<c_imageSizeX, c_imageSizeY, c_imageSizeZ, c_energySigma, c_energySigma, c_energySigma, c_valueSigma>>(c_swapCountFactor, c_coolingFactor, "out/stbn_vec1_2Dx1D");
    //MakeMask<Make_Float2<c_imageSizeX, c_imageSizeY, c_imageSizeZ, c_energySigma, c_energySigma, c_energySigma, c_valueSigma>>(c_swapCountFactor, c_coolingFactor, "out/stbn_vec2_2Dx1D");
    //MakeMask<Make_Float3<c_imageSizeX, c_imageSizeY, c_imageSizeZ, c_energySigma, c_energySigma, c_energySigma, c_valueSigma>>(c_swapCountFactor, c_coolingFactor, "out/stbn_vec3_2Dx1D");
    //MakeMask<Make_UnitFloat<c_imageSizeX, c_imageSizeY, c_imageSizeZ, c_energySigma, c_energySigma, c_energySigma, c_valueSigma>>(c_swapCountFactor, c_coolingFactor, "out/stbn_unitvec1_2Dx1D");
    //MakeMask<Make_UnitFloat2<c_imageSizeX, c_imageSizeY, c_imageSizeZ, c_energySigma, c_energySigma, c_energySigma, c_valueSigma>>(c_swapCountFactor, c_coolingFactor, "out/stbn_unitvec2_2Dx1D");
    //MakeMask<Make_UnitFloat3<c_imageSizeX, c_imageSizeY, c_imageSizeZ, c_energySigma, c_energySigma, c_energySigma, c_valueSigma>>(c_swapCountFactor, c_coolingFactor, "out/stbn_unitvec3_2Dx1D");
    //MakeMask<Make_UnitFloat3<c_imageSizeX, c_imageSizeY, c_imageSizeZ, c_energySigma, c_energySigma, c_energySigma, c_valueSigma>>(c_swapCountFactor, c_coolingFactor, "out/stbn_unitvec3_forest_2Dx1D", "mossy_forest_1k.hdr");
    //MakeMask<Make_UnitFloat3_CosineWeightedHemisphere<c_imageSizeX, c_imageSizeY, c_imageSizeZ, c_energySigma, c_energySigma, c_energySigma, c_valueSigma>>(c_swapCountFactor, c_coolingFactor, "D:/STBN/stbn_unitvec3_cosine_2Dx1D");
    MakeMask<Make_Float2_Disc<c_imageSizeX, c_imageSizeY, c_imageSizeZ, c_energySigma, c_energySigma, c_energySigma, c_valueSigma>>(c_swapCountFactor, c_coolingFactor, "D:/STBN/stbn_vec2_disc_2Dx1D");

    return 0;
}
