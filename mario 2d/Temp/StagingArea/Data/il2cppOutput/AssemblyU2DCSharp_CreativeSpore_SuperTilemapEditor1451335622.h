#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "AssemblyU2DCSharp_CreativeSpore_SuperTilemapEditor1719672998.h"
#include "AssemblyU2DCSharp_CreativeSpore_SuperTilemapEditor3864107816.h"

// CreativeSpore.SuperTilemapEditor.ParameterContainer
struct ParameterContainer_t3296704120;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.Tile
struct  Tile_t1451335622  : public Il2CppObject
{
public:
	// UnityEngine.Rect CreativeSpore.SuperTilemapEditor.Tile::uv
	Rect_t3681755626  ___uv_0;
	// CreativeSpore.SuperTilemapEditor.TileColliderData CreativeSpore.SuperTilemapEditor.Tile::collData
	TileColliderData_t1719672998  ___collData_1;
	// CreativeSpore.SuperTilemapEditor.ParameterContainer CreativeSpore.SuperTilemapEditor.Tile::paramContainer
	ParameterContainer_t3296704120 * ___paramContainer_2;
	// CreativeSpore.SuperTilemapEditor.TilePrefabData CreativeSpore.SuperTilemapEditor.Tile::prefabData
	TilePrefabData_t3864107816  ___prefabData_3;

public:
	inline static int32_t get_offset_of_uv_0() { return static_cast<int32_t>(offsetof(Tile_t1451335622, ___uv_0)); }
	inline Rect_t3681755626  get_uv_0() const { return ___uv_0; }
	inline Rect_t3681755626 * get_address_of_uv_0() { return &___uv_0; }
	inline void set_uv_0(Rect_t3681755626  value)
	{
		___uv_0 = value;
	}

	inline static int32_t get_offset_of_collData_1() { return static_cast<int32_t>(offsetof(Tile_t1451335622, ___collData_1)); }
	inline TileColliderData_t1719672998  get_collData_1() const { return ___collData_1; }
	inline TileColliderData_t1719672998 * get_address_of_collData_1() { return &___collData_1; }
	inline void set_collData_1(TileColliderData_t1719672998  value)
	{
		___collData_1 = value;
	}

	inline static int32_t get_offset_of_paramContainer_2() { return static_cast<int32_t>(offsetof(Tile_t1451335622, ___paramContainer_2)); }
	inline ParameterContainer_t3296704120 * get_paramContainer_2() const { return ___paramContainer_2; }
	inline ParameterContainer_t3296704120 ** get_address_of_paramContainer_2() { return &___paramContainer_2; }
	inline void set_paramContainer_2(ParameterContainer_t3296704120 * value)
	{
		___paramContainer_2 = value;
		Il2CppCodeGenWriteBarrier(&___paramContainer_2, value);
	}

	inline static int32_t get_offset_of_prefabData_3() { return static_cast<int32_t>(offsetof(Tile_t1451335622, ___prefabData_3)); }
	inline TilePrefabData_t3864107816  get_prefabData_3() const { return ___prefabData_3; }
	inline TilePrefabData_t3864107816 * get_address_of_prefabData_3() { return &___prefabData_3; }
	inline void set_prefabData_3(TilePrefabData_t3864107816  value)
	{
		___prefabData_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
