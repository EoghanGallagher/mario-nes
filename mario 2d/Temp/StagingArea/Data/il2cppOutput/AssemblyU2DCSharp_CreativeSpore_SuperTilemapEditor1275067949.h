#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// CreativeSpore.SuperTilemapEditor.IBrush
struct IBrush_t2522278503;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.TilemapChunk/AnimTileData
struct  AnimTileData_t1275067949 
{
public:
	// System.Int32 CreativeSpore.SuperTilemapEditor.TilemapChunk/AnimTileData::VertexIdx
	int32_t ___VertexIdx_0;
	// System.Int32 CreativeSpore.SuperTilemapEditor.TilemapChunk/AnimTileData::SubTileIdx
	int32_t ___SubTileIdx_1;
	// CreativeSpore.SuperTilemapEditor.IBrush CreativeSpore.SuperTilemapEditor.TilemapChunk/AnimTileData::Brush
	Il2CppObject * ___Brush_2;

public:
	inline static int32_t get_offset_of_VertexIdx_0() { return static_cast<int32_t>(offsetof(AnimTileData_t1275067949, ___VertexIdx_0)); }
	inline int32_t get_VertexIdx_0() const { return ___VertexIdx_0; }
	inline int32_t* get_address_of_VertexIdx_0() { return &___VertexIdx_0; }
	inline void set_VertexIdx_0(int32_t value)
	{
		___VertexIdx_0 = value;
	}

	inline static int32_t get_offset_of_SubTileIdx_1() { return static_cast<int32_t>(offsetof(AnimTileData_t1275067949, ___SubTileIdx_1)); }
	inline int32_t get_SubTileIdx_1() const { return ___SubTileIdx_1; }
	inline int32_t* get_address_of_SubTileIdx_1() { return &___SubTileIdx_1; }
	inline void set_SubTileIdx_1(int32_t value)
	{
		___SubTileIdx_1 = value;
	}

	inline static int32_t get_offset_of_Brush_2() { return static_cast<int32_t>(offsetof(AnimTileData_t1275067949, ___Brush_2)); }
	inline Il2CppObject * get_Brush_2() const { return ___Brush_2; }
	inline Il2CppObject ** get_address_of_Brush_2() { return &___Brush_2; }
	inline void set_Brush_2(Il2CppObject * value)
	{
		___Brush_2 = value;
		Il2CppCodeGenWriteBarrier(&___Brush_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of CreativeSpore.SuperTilemapEditor.TilemapChunk/AnimTileData
struct AnimTileData_t1275067949_marshaled_pinvoke
{
	int32_t ___VertexIdx_0;
	int32_t ___SubTileIdx_1;
	Il2CppObject * ___Brush_2;
};
// Native definition for COM marshalling of CreativeSpore.SuperTilemapEditor.TilemapChunk/AnimTileData
struct AnimTileData_t1275067949_marshaled_com
{
	int32_t ___VertexIdx_0;
	int32_t ___SubTileIdx_1;
	Il2CppObject * ___Brush_2;
};
