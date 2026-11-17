#ifndef ENDING_HEADER_H
#define ENDING_HEADER_H

#include "types.h"

// geo
extern const GeoLayout ending_geo_000050[];

// leveldata
extern const Gfx dl_cake_end_screen[];
extern const u32 gCakeEndScreenDisplayListSize;
#ifdef VERSION_EU
extern const Texture *gCakeEndScreenNormalTextures[];
extern const Texture *gCakeEndScreenVoidTextures[];
extern const Texture *gCakeEndScreenNormalLocalizedTextures[];
extern const Texture *gCakeEndScreenVoidLocalizedTextures[];
extern const Gfx *gCakeEndScreenLocalizedDisplayLists[];
extern const u32 gCakeEndScreenLocalizedDisplayListSizes[];
#else
extern const u8 *gCakeEndScreenNormalTextureData;
extern const u8 *gCakeEndScreenVoidTextureData;
extern const u32 gCakeEndScreenTextureDataSize;
#endif
#ifdef EU_CUSTOM_CAKE_FIX
extern const Gfx dl_cake_end_screen_eu_fix[];
#else
extern const Gfx dl_cake_end_screen_eu_070296F8[];
extern const Gfx dl_cake_end_screen_eu_07029768[];
extern const Gfx dl_cake_end_screen_eu_070297D8[];
#endif
extern const Gfx dl_cake_end_screen[];

// script
extern const LevelScript level_ending_entry[];

#endif
