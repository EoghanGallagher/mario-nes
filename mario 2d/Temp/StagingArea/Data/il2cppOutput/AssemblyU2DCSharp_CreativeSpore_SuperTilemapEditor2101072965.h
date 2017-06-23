#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_CreativeSpore_SuperTilemapEditor_439307774.h"

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t1518803153;
// System.Collections.Generic.List`1<CreativeSpore.SuperTilemapEditor.RandomBrush/RandomTileData>
struct List_1_t795757263;
// System.Func`2<System.UInt32,CreativeSpore.SuperTilemapEditor.RandomBrush/RandomTileData>
struct Func_2_t2302410395;
// System.Func`2<CreativeSpore.SuperTilemapEditor.RandomBrush/RandomTileData,System.Single>
struct Func_2_t3111045230;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.RandomBrush
struct  RandomBrush_t2101072965  : public TilesetBrush_t439307774
{
public:
	// System.Collections.Generic.List`1<System.UInt32> CreativeSpore.SuperTilemapEditor.RandomBrush::RandomTiles
	List_1_t1518803153 * ___RandomTiles_10;
	// System.Collections.Generic.List`1<CreativeSpore.SuperTilemapEditor.RandomBrush/RandomTileData> CreativeSpore.SuperTilemapEditor.RandomBrush::RandomTileList
	List_1_t795757263 * ___RandomTileList_11;
	// System.UInt32 CreativeSpore.SuperTilemapEditor.RandomBrush::RandomizeFlagMask
	uint32_t ___RandomizeFlagMask_12;
	// System.Boolean CreativeSpore.SuperTilemapEditor.RandomBrush::RemoveBrushIdAfterRefresh
	bool ___RemoveBrushIdAfterRefresh_13;
	// System.Collections.Generic.List`1<CreativeSpore.SuperTilemapEditor.RandomBrush/RandomTileData> CreativeSpore.SuperTilemapEditor.RandomBrush::m_sortedList
	List_1_t795757263 * ___m_sortedList_14;
	// System.Single CreativeSpore.SuperTilemapEditor.RandomBrush::m_sumProbabilityFactor
	float ___m_sumProbabilityFactor_15;

public:
	inline static int32_t get_offset_of_RandomTiles_10() { return static_cast<int32_t>(offsetof(RandomBrush_t2101072965, ___RandomTiles_10)); }
	inline List_1_t1518803153 * get_RandomTiles_10() const { return ___RandomTiles_10; }
	inline List_1_t1518803153 ** get_address_of_RandomTiles_10() { return &___RandomTiles_10; }
	inline void set_RandomTiles_10(List_1_t1518803153 * value)
	{
		___RandomTiles_10 = value;
		Il2CppCodeGenWriteBarrier(&___RandomTiles_10, value);
	}

	inline static int32_t get_offset_of_RandomTileList_11() { return static_cast<int32_t>(offsetof(RandomBrush_t2101072965, ___RandomTileList_11)); }
	inline List_1_t795757263 * get_RandomTileList_11() const { return ___RandomTileList_11; }
	inline List_1_t795757263 ** get_address_of_RandomTileList_11() { return &___RandomTileList_11; }
	inline void set_RandomTileList_11(List_1_t795757263 * value)
	{
		___RandomTileList_11 = value;
		Il2CppCodeGenWriteBarrier(&___RandomTileList_11, value);
	}

	inline static int32_t get_offset_of_RandomizeFlagMask_12() { return static_cast<int32_t>(offsetof(RandomBrush_t2101072965, ___RandomizeFlagMask_12)); }
	inline uint32_t get_RandomizeFlagMask_12() const { return ___RandomizeFlagMask_12; }
	inline uint32_t* get_address_of_RandomizeFlagMask_12() { return &___RandomizeFlagMask_12; }
	inline void set_RandomizeFlagMask_12(uint32_t value)
	{
		___RandomizeFlagMask_12 = value;
	}

	inline static int32_t get_offset_of_RemoveBrushIdAfterRefresh_13() { return static_cast<int32_t>(offsetof(RandomBrush_t2101072965, ___RemoveBrushIdAfterRefresh_13)); }
	inline bool get_RemoveBrushIdAfterRefresh_13() const { return ___RemoveBrushIdAfterRefresh_13; }
	inline bool* get_address_of_RemoveBrushIdAfterRefresh_13() { return &___RemoveBrushIdAfterRefresh_13; }
	inline void set_RemoveBrushIdAfterRefresh_13(bool value)
	{
		___RemoveBrushIdAfterRefresh_13 = value;
	}

	inline static int32_t get_offset_of_m_sortedList_14() { return static_cast<int32_t>(offsetof(RandomBrush_t2101072965, ___m_sortedList_14)); }
	inline List_1_t795757263 * get_m_sortedList_14() const { return ___m_sortedList_14; }
	inline List_1_t795757263 ** get_address_of_m_sortedList_14() { return &___m_sortedList_14; }
	inline void set_m_sortedList_14(List_1_t795757263 * value)
	{
		___m_sortedList_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_sortedList_14, value);
	}

	inline static int32_t get_offset_of_m_sumProbabilityFactor_15() { return static_cast<int32_t>(offsetof(RandomBrush_t2101072965, ___m_sumProbabilityFactor_15)); }
	inline float get_m_sumProbabilityFactor_15() const { return ___m_sumProbabilityFactor_15; }
	inline float* get_address_of_m_sumProbabilityFactor_15() { return &___m_sumProbabilityFactor_15; }
	inline void set_m_sumProbabilityFactor_15(float value)
	{
		___m_sumProbabilityFactor_15 = value;
	}
};

struct RandomBrush_t2101072965_StaticFields
{
public:
	// System.Func`2<System.UInt32,CreativeSpore.SuperTilemapEditor.RandomBrush/RandomTileData> CreativeSpore.SuperTilemapEditor.RandomBrush::<>f__am$cache0
	Func_2_t2302410395 * ___U3CU3Ef__amU24cache0_16;
	// System.Func`2<CreativeSpore.SuperTilemapEditor.RandomBrush/RandomTileData,System.Single> CreativeSpore.SuperTilemapEditor.RandomBrush::<>f__am$cache1
	Func_2_t3111045230 * ___U3CU3Ef__amU24cache1_17;
	// System.Func`2<CreativeSpore.SuperTilemapEditor.RandomBrush/RandomTileData,System.Single> CreativeSpore.SuperTilemapEditor.RandomBrush::<>f__am$cache2
	Func_2_t3111045230 * ___U3CU3Ef__amU24cache2_18;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_16() { return static_cast<int32_t>(offsetof(RandomBrush_t2101072965_StaticFields, ___U3CU3Ef__amU24cache0_16)); }
	inline Func_2_t2302410395 * get_U3CU3Ef__amU24cache0_16() const { return ___U3CU3Ef__amU24cache0_16; }
	inline Func_2_t2302410395 ** get_address_of_U3CU3Ef__amU24cache0_16() { return &___U3CU3Ef__amU24cache0_16; }
	inline void set_U3CU3Ef__amU24cache0_16(Func_2_t2302410395 * value)
	{
		___U3CU3Ef__amU24cache0_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_17() { return static_cast<int32_t>(offsetof(RandomBrush_t2101072965_StaticFields, ___U3CU3Ef__amU24cache1_17)); }
	inline Func_2_t3111045230 * get_U3CU3Ef__amU24cache1_17() const { return ___U3CU3Ef__amU24cache1_17; }
	inline Func_2_t3111045230 ** get_address_of_U3CU3Ef__amU24cache1_17() { return &___U3CU3Ef__amU24cache1_17; }
	inline void set_U3CU3Ef__amU24cache1_17(Func_2_t3111045230 * value)
	{
		___U3CU3Ef__amU24cache1_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_18() { return static_cast<int32_t>(offsetof(RandomBrush_t2101072965_StaticFields, ___U3CU3Ef__amU24cache2_18)); }
	inline Func_2_t3111045230 * get_U3CU3Ef__amU24cache2_18() const { return ___U3CU3Ef__amU24cache2_18; }
	inline Func_2_t3111045230 ** get_address_of_U3CU3Ef__amU24cache2_18() { return &___U3CU3Ef__amU24cache2_18; }
	inline void set_U3CU3Ef__amU24cache2_18(Func_2_t3111045230 * value)
	{
		___U3CU3Ef__amU24cache2_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
