#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_CreativeSpore_SuperTilemapEditor3563079930.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.TilePrefabData
struct  TilePrefabData_t3864107816 
{
public:
	// UnityEngine.GameObject CreativeSpore.SuperTilemapEditor.TilePrefabData::prefab
	GameObject_t1756533147 * ___prefab_0;
	// UnityEngine.Vector3 CreativeSpore.SuperTilemapEditor.TilePrefabData::offset
	Vector3_t2243707580  ___offset_1;
	// CreativeSpore.SuperTilemapEditor.TilePrefabData/eOffsetMode CreativeSpore.SuperTilemapEditor.TilePrefabData::offsetMode
	int32_t ___offsetMode_2;
	// System.Boolean CreativeSpore.SuperTilemapEditor.TilePrefabData::showTileWithPrefab
	bool ___showTileWithPrefab_3;

public:
	inline static int32_t get_offset_of_prefab_0() { return static_cast<int32_t>(offsetof(TilePrefabData_t3864107816, ___prefab_0)); }
	inline GameObject_t1756533147 * get_prefab_0() const { return ___prefab_0; }
	inline GameObject_t1756533147 ** get_address_of_prefab_0() { return &___prefab_0; }
	inline void set_prefab_0(GameObject_t1756533147 * value)
	{
		___prefab_0 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_0, value);
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(TilePrefabData_t3864107816, ___offset_1)); }
	inline Vector3_t2243707580  get_offset_1() const { return ___offset_1; }
	inline Vector3_t2243707580 * get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(Vector3_t2243707580  value)
	{
		___offset_1 = value;
	}

	inline static int32_t get_offset_of_offsetMode_2() { return static_cast<int32_t>(offsetof(TilePrefabData_t3864107816, ___offsetMode_2)); }
	inline int32_t get_offsetMode_2() const { return ___offsetMode_2; }
	inline int32_t* get_address_of_offsetMode_2() { return &___offsetMode_2; }
	inline void set_offsetMode_2(int32_t value)
	{
		___offsetMode_2 = value;
	}

	inline static int32_t get_offset_of_showTileWithPrefab_3() { return static_cast<int32_t>(offsetof(TilePrefabData_t3864107816, ___showTileWithPrefab_3)); }
	inline bool get_showTileWithPrefab_3() const { return ___showTileWithPrefab_3; }
	inline bool* get_address_of_showTileWithPrefab_3() { return &___showTileWithPrefab_3; }
	inline void set_showTileWithPrefab_3(bool value)
	{
		___showTileWithPrefab_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of CreativeSpore.SuperTilemapEditor.TilePrefabData
struct TilePrefabData_t3864107816_marshaled_pinvoke
{
	GameObject_t1756533147 * ___prefab_0;
	Vector3_t2243707580  ___offset_1;
	int32_t ___offsetMode_2;
	int32_t ___showTileWithPrefab_3;
};
// Native definition for COM marshalling of CreativeSpore.SuperTilemapEditor.TilePrefabData
struct TilePrefabData_t3864107816_marshaled_com
{
	GameObject_t1756533147 * ___prefab_0;
	Vector3_t2243707580  ___offset_1;
	int32_t ___offsetMode_2;
	int32_t ___showTileWithPrefab_3;
};
