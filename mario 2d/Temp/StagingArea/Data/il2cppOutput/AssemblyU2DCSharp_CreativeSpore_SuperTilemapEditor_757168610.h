#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// CreativeSpore.SuperTilemapEditor.Tilemap
struct Tilemap_t342945180;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.TilemapChunk/OnTilePrefabCreationData
struct  OnTilePrefabCreationData_t757168610 
{
public:
	// CreativeSpore.SuperTilemapEditor.Tilemap CreativeSpore.SuperTilemapEditor.TilemapChunk/OnTilePrefabCreationData::ParentTilemap
	Tilemap_t342945180 * ___ParentTilemap_0;
	// System.Int32 CreativeSpore.SuperTilemapEditor.TilemapChunk/OnTilePrefabCreationData::GridX
	int32_t ___GridX_1;
	// System.Int32 CreativeSpore.SuperTilemapEditor.TilemapChunk/OnTilePrefabCreationData::GridY
	int32_t ___GridY_2;

public:
	inline static int32_t get_offset_of_ParentTilemap_0() { return static_cast<int32_t>(offsetof(OnTilePrefabCreationData_t757168610, ___ParentTilemap_0)); }
	inline Tilemap_t342945180 * get_ParentTilemap_0() const { return ___ParentTilemap_0; }
	inline Tilemap_t342945180 ** get_address_of_ParentTilemap_0() { return &___ParentTilemap_0; }
	inline void set_ParentTilemap_0(Tilemap_t342945180 * value)
	{
		___ParentTilemap_0 = value;
		Il2CppCodeGenWriteBarrier(&___ParentTilemap_0, value);
	}

	inline static int32_t get_offset_of_GridX_1() { return static_cast<int32_t>(offsetof(OnTilePrefabCreationData_t757168610, ___GridX_1)); }
	inline int32_t get_GridX_1() const { return ___GridX_1; }
	inline int32_t* get_address_of_GridX_1() { return &___GridX_1; }
	inline void set_GridX_1(int32_t value)
	{
		___GridX_1 = value;
	}

	inline static int32_t get_offset_of_GridY_2() { return static_cast<int32_t>(offsetof(OnTilePrefabCreationData_t757168610, ___GridY_2)); }
	inline int32_t get_GridY_2() const { return ___GridY_2; }
	inline int32_t* get_address_of_GridY_2() { return &___GridY_2; }
	inline void set_GridY_2(int32_t value)
	{
		___GridY_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of CreativeSpore.SuperTilemapEditor.TilemapChunk/OnTilePrefabCreationData
struct OnTilePrefabCreationData_t757168610_marshaled_pinvoke
{
	Tilemap_t342945180 * ___ParentTilemap_0;
	int32_t ___GridX_1;
	int32_t ___GridY_2;
};
// Native definition for COM marshalling of CreativeSpore.SuperTilemapEditor.TilemapChunk/OnTilePrefabCreationData
struct OnTilePrefabCreationData_t757168610_marshaled_com
{
	Tilemap_t342945180 * ___ParentTilemap_0;
	int32_t ___GridX_1;
	int32_t ___GridY_2;
};
