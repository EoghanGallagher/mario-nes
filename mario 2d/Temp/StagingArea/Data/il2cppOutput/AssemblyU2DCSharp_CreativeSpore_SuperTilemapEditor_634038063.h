#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<CreativeSpore.SuperTilemapEditor.Tilemap>
struct List_1_t4007033608;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.TilemapGroup
struct  TilemapGroup_t634038063  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<CreativeSpore.SuperTilemapEditor.Tilemap> CreativeSpore.SuperTilemapEditor.TilemapGroup::m_tilemaps
	List_1_t4007033608 * ___m_tilemaps_2;
	// System.Int32 CreativeSpore.SuperTilemapEditor.TilemapGroup::m_selectedIndex
	int32_t ___m_selectedIndex_3;
	// System.Single CreativeSpore.SuperTilemapEditor.TilemapGroup::m_unselectedColorMultiplier
	float ___m_unselectedColorMultiplier_4;
	// System.Boolean CreativeSpore.SuperTilemapEditor.TilemapGroup::m_displayTilemapRList
	bool ___m_displayTilemapRList_5;

public:
	inline static int32_t get_offset_of_m_tilemaps_2() { return static_cast<int32_t>(offsetof(TilemapGroup_t634038063, ___m_tilemaps_2)); }
	inline List_1_t4007033608 * get_m_tilemaps_2() const { return ___m_tilemaps_2; }
	inline List_1_t4007033608 ** get_address_of_m_tilemaps_2() { return &___m_tilemaps_2; }
	inline void set_m_tilemaps_2(List_1_t4007033608 * value)
	{
		___m_tilemaps_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_tilemaps_2, value);
	}

	inline static int32_t get_offset_of_m_selectedIndex_3() { return static_cast<int32_t>(offsetof(TilemapGroup_t634038063, ___m_selectedIndex_3)); }
	inline int32_t get_m_selectedIndex_3() const { return ___m_selectedIndex_3; }
	inline int32_t* get_address_of_m_selectedIndex_3() { return &___m_selectedIndex_3; }
	inline void set_m_selectedIndex_3(int32_t value)
	{
		___m_selectedIndex_3 = value;
	}

	inline static int32_t get_offset_of_m_unselectedColorMultiplier_4() { return static_cast<int32_t>(offsetof(TilemapGroup_t634038063, ___m_unselectedColorMultiplier_4)); }
	inline float get_m_unselectedColorMultiplier_4() const { return ___m_unselectedColorMultiplier_4; }
	inline float* get_address_of_m_unselectedColorMultiplier_4() { return &___m_unselectedColorMultiplier_4; }
	inline void set_m_unselectedColorMultiplier_4(float value)
	{
		___m_unselectedColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_displayTilemapRList_5() { return static_cast<int32_t>(offsetof(TilemapGroup_t634038063, ___m_displayTilemapRList_5)); }
	inline bool get_m_displayTilemapRList_5() const { return ___m_displayTilemapRList_5; }
	inline bool* get_address_of_m_displayTilemapRList_5() { return &___m_displayTilemapRList_5; }
	inline void set_m_displayTilemapRList_5(bool value)
	{
		___m_displayTilemapRList_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
