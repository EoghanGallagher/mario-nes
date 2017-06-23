#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_CreativeSpore_SuperTilemapEditor_439307774.h"

// System.Collections.Generic.List`1<CreativeSpore.SuperTilemapEditor.AnimBrush/TileAnimFrame>
struct List_1_t1733078814;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.AnimBrush
struct  AnimBrush_t1985656221  : public TilesetBrush_t439307774
{
public:
	// System.UInt32 CreativeSpore.SuperTilemapEditor.AnimBrush::AnimFPS
	uint32_t ___AnimFPS_10;
	// System.Collections.Generic.List`1<CreativeSpore.SuperTilemapEditor.AnimBrush/TileAnimFrame> CreativeSpore.SuperTilemapEditor.AnimBrush::AnimFrames
	List_1_t1733078814 * ___AnimFrames_11;
	// System.Int32 CreativeSpore.SuperTilemapEditor.AnimBrush::m_animTileIdx
	int32_t ___m_animTileIdx_12;

public:
	inline static int32_t get_offset_of_AnimFPS_10() { return static_cast<int32_t>(offsetof(AnimBrush_t1985656221, ___AnimFPS_10)); }
	inline uint32_t get_AnimFPS_10() const { return ___AnimFPS_10; }
	inline uint32_t* get_address_of_AnimFPS_10() { return &___AnimFPS_10; }
	inline void set_AnimFPS_10(uint32_t value)
	{
		___AnimFPS_10 = value;
	}

	inline static int32_t get_offset_of_AnimFrames_11() { return static_cast<int32_t>(offsetof(AnimBrush_t1985656221, ___AnimFrames_11)); }
	inline List_1_t1733078814 * get_AnimFrames_11() const { return ___AnimFrames_11; }
	inline List_1_t1733078814 ** get_address_of_AnimFrames_11() { return &___AnimFrames_11; }
	inline void set_AnimFrames_11(List_1_t1733078814 * value)
	{
		___AnimFrames_11 = value;
		Il2CppCodeGenWriteBarrier(&___AnimFrames_11, value);
	}

	inline static int32_t get_offset_of_m_animTileIdx_12() { return static_cast<int32_t>(offsetof(AnimBrush_t1985656221, ___m_animTileIdx_12)); }
	inline int32_t get_m_animTileIdx_12() const { return ___m_animTileIdx_12; }
	inline int32_t* get_address_of_m_animTileIdx_12() { return &___m_animTileIdx_12; }
	inline void set_m_animTileIdx_12(int32_t value)
	{
		___m_animTileIdx_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
