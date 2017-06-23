#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// CreativeSpore.SuperTilemapEditor.Tilemap
struct Tilemap_t342945180;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.RogueLikeMapGenerator
struct  RogueLikeMapGenerator_t1741430384  : public MonoBehaviour_t1158329972
{
public:
	// CreativeSpore.SuperTilemapEditor.Tilemap CreativeSpore.SuperTilemapEditor.RogueLikeMapGenerator::Ground
	Tilemap_t342945180 * ___Ground_2;
	// CreativeSpore.SuperTilemapEditor.Tilemap CreativeSpore.SuperTilemapEditor.RogueLikeMapGenerator::GroundOverlay
	Tilemap_t342945180 * ___GroundOverlay_3;
	// System.Int32 CreativeSpore.SuperTilemapEditor.RogueLikeMapGenerator::Width
	int32_t ___Width_4;
	// System.Int32 CreativeSpore.SuperTilemapEditor.RogueLikeMapGenerator::Height
	int32_t ___Height_5;

public:
	inline static int32_t get_offset_of_Ground_2() { return static_cast<int32_t>(offsetof(RogueLikeMapGenerator_t1741430384, ___Ground_2)); }
	inline Tilemap_t342945180 * get_Ground_2() const { return ___Ground_2; }
	inline Tilemap_t342945180 ** get_address_of_Ground_2() { return &___Ground_2; }
	inline void set_Ground_2(Tilemap_t342945180 * value)
	{
		___Ground_2 = value;
		Il2CppCodeGenWriteBarrier(&___Ground_2, value);
	}

	inline static int32_t get_offset_of_GroundOverlay_3() { return static_cast<int32_t>(offsetof(RogueLikeMapGenerator_t1741430384, ___GroundOverlay_3)); }
	inline Tilemap_t342945180 * get_GroundOverlay_3() const { return ___GroundOverlay_3; }
	inline Tilemap_t342945180 ** get_address_of_GroundOverlay_3() { return &___GroundOverlay_3; }
	inline void set_GroundOverlay_3(Tilemap_t342945180 * value)
	{
		___GroundOverlay_3 = value;
		Il2CppCodeGenWriteBarrier(&___GroundOverlay_3, value);
	}

	inline static int32_t get_offset_of_Width_4() { return static_cast<int32_t>(offsetof(RogueLikeMapGenerator_t1741430384, ___Width_4)); }
	inline int32_t get_Width_4() const { return ___Width_4; }
	inline int32_t* get_address_of_Width_4() { return &___Width_4; }
	inline void set_Width_4(int32_t value)
	{
		___Width_4 = value;
	}

	inline static int32_t get_offset_of_Height_5() { return static_cast<int32_t>(offsetof(RogueLikeMapGenerator_t1741430384, ___Height_5)); }
	inline int32_t get_Height_5() const { return ___Height_5; }
	inline int32_t* get_address_of_Height_5() { return &___Height_5; }
	inline void set_Height_5(int32_t value)
	{
		___Height_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
