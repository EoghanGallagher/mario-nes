#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.AnimBrush/TileAnimFrame
struct  TileAnimFrame_t2363957682  : public Il2CppObject
{
public:
	// System.UInt32 CreativeSpore.SuperTilemapEditor.AnimBrush/TileAnimFrame::tileId
	uint32_t ___tileId_0;
	// UnityEngine.Vector2 CreativeSpore.SuperTilemapEditor.AnimBrush/TileAnimFrame::UVOffset
	Vector2_t2243707579  ___UVOffset_1;

public:
	inline static int32_t get_offset_of_tileId_0() { return static_cast<int32_t>(offsetof(TileAnimFrame_t2363957682, ___tileId_0)); }
	inline uint32_t get_tileId_0() const { return ___tileId_0; }
	inline uint32_t* get_address_of_tileId_0() { return &___tileId_0; }
	inline void set_tileId_0(uint32_t value)
	{
		___tileId_0 = value;
	}

	inline static int32_t get_offset_of_UVOffset_1() { return static_cast<int32_t>(offsetof(TileAnimFrame_t2363957682, ___UVOffset_1)); }
	inline Vector2_t2243707579  get_UVOffset_1() const { return ___UVOffset_1; }
	inline Vector2_t2243707579 * get_address_of_UVOffset_1() { return &___UVOffset_1; }
	inline void set_UVOffset_1(Vector2_t2243707579  value)
	{
		___UVOffset_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
