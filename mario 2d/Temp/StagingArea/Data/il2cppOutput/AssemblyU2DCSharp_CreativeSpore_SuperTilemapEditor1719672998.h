#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_CreativeSpore_SuperTilemapEditor2645611879.h"

// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
struct Vector2_t2243707579 ;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.TileColliderData
struct  TileColliderData_t1719672998 
{
public:
	// UnityEngine.Vector2[] CreativeSpore.SuperTilemapEditor.TileColliderData::vertices
	Vector2U5BU5D_t686124026* ___vertices_0;
	// CreativeSpore.SuperTilemapEditor.eTileCollider CreativeSpore.SuperTilemapEditor.TileColliderData::type
	int32_t ___type_1;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(TileColliderData_t1719672998, ___vertices_0)); }
	inline Vector2U5BU5D_t686124026* get_vertices_0() const { return ___vertices_0; }
	inline Vector2U5BU5D_t686124026** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(Vector2U5BU5D_t686124026* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_0, value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(TileColliderData_t1719672998, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of CreativeSpore.SuperTilemapEditor.TileColliderData
struct TileColliderData_t1719672998_marshaled_pinvoke
{
	Vector2_t2243707579 * ___vertices_0;
	int32_t ___type_1;
};
// Native definition for COM marshalling of CreativeSpore.SuperTilemapEditor.TileColliderData
struct TileColliderData_t1719672998_marshaled_com
{
	Vector2_t2243707579 * ___vertices_0;
	int32_t ___type_1;
};
