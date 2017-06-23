#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_CreativeSpore_SuperTilemapEditor3864107816.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.TilemapChunk/TileObjData
struct  TileObjData_t2320321229  : public Il2CppObject
{
public:
	// System.Int32 CreativeSpore.SuperTilemapEditor.TilemapChunk/TileObjData::tilePos
	int32_t ___tilePos_0;
	// CreativeSpore.SuperTilemapEditor.TilePrefabData CreativeSpore.SuperTilemapEditor.TilemapChunk/TileObjData::tilePrefabData
	TilePrefabData_t3864107816  ___tilePrefabData_1;
	// UnityEngine.GameObject CreativeSpore.SuperTilemapEditor.TilemapChunk/TileObjData::obj
	GameObject_t1756533147 * ___obj_2;

public:
	inline static int32_t get_offset_of_tilePos_0() { return static_cast<int32_t>(offsetof(TileObjData_t2320321229, ___tilePos_0)); }
	inline int32_t get_tilePos_0() const { return ___tilePos_0; }
	inline int32_t* get_address_of_tilePos_0() { return &___tilePos_0; }
	inline void set_tilePos_0(int32_t value)
	{
		___tilePos_0 = value;
	}

	inline static int32_t get_offset_of_tilePrefabData_1() { return static_cast<int32_t>(offsetof(TileObjData_t2320321229, ___tilePrefabData_1)); }
	inline TilePrefabData_t3864107816  get_tilePrefabData_1() const { return ___tilePrefabData_1; }
	inline TilePrefabData_t3864107816 * get_address_of_tilePrefabData_1() { return &___tilePrefabData_1; }
	inline void set_tilePrefabData_1(TilePrefabData_t3864107816  value)
	{
		___tilePrefabData_1 = value;
	}

	inline static int32_t get_offset_of_obj_2() { return static_cast<int32_t>(offsetof(TileObjData_t2320321229, ___obj_2)); }
	inline GameObject_t1756533147 * get_obj_2() const { return ___obj_2; }
	inline GameObject_t1756533147 ** get_address_of_obj_2() { return &___obj_2; }
	inline void set_obj_2(GameObject_t1756533147 * value)
	{
		___obj_2 = value;
		Il2CppCodeGenWriteBarrier(&___obj_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
