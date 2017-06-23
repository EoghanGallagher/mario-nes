#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// CreativeSpore.SuperTilemapEditor.TilesetBrush
struct TilesetBrush_t439307774;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.Tileset/BrushContainer
struct  BrushContainer_t2403285910 
{
public:
	// System.Int32 CreativeSpore.SuperTilemapEditor.Tileset/BrushContainer::Id
	int32_t ___Id_0;
	// CreativeSpore.SuperTilemapEditor.TilesetBrush CreativeSpore.SuperTilemapEditor.Tileset/BrushContainer::BrushAsset
	TilesetBrush_t439307774 * ___BrushAsset_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(BrushContainer_t2403285910, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_BrushAsset_1() { return static_cast<int32_t>(offsetof(BrushContainer_t2403285910, ___BrushAsset_1)); }
	inline TilesetBrush_t439307774 * get_BrushAsset_1() const { return ___BrushAsset_1; }
	inline TilesetBrush_t439307774 ** get_address_of_BrushAsset_1() { return &___BrushAsset_1; }
	inline void set_BrushAsset_1(TilesetBrush_t439307774 * value)
	{
		___BrushAsset_1 = value;
		Il2CppCodeGenWriteBarrier(&___BrushAsset_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of CreativeSpore.SuperTilemapEditor.Tileset/BrushContainer
struct BrushContainer_t2403285910_marshaled_pinvoke
{
	int32_t ___Id_0;
	TilesetBrush_t439307774 * ___BrushAsset_1;
};
// Native definition for COM marshalling of CreativeSpore.SuperTilemapEditor.Tileset/BrushContainer
struct BrushContainer_t2403285910_marshaled_com
{
	int32_t ___Id_0;
	TilesetBrush_t439307774 * ___BrushAsset_1;
};
