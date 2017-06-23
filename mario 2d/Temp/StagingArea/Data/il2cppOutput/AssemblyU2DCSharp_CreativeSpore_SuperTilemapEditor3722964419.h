#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_CreativeSpore_SuperTilemapEditor1442477864.h"

// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.CarpetBrush
struct  CarpetBrush_t3722964419  : public RoadBrush_t1442477864
{
public:
	// System.UInt32[] CreativeSpore.SuperTilemapEditor.CarpetBrush::InteriorCornerTileIds
	UInt32U5BU5D_t59386216* ___InteriorCornerTileIds_11;

public:
	inline static int32_t get_offset_of_InteriorCornerTileIds_11() { return static_cast<int32_t>(offsetof(CarpetBrush_t3722964419, ___InteriorCornerTileIds_11)); }
	inline UInt32U5BU5D_t59386216* get_InteriorCornerTileIds_11() const { return ___InteriorCornerTileIds_11; }
	inline UInt32U5BU5D_t59386216** get_address_of_InteriorCornerTileIds_11() { return &___InteriorCornerTileIds_11; }
	inline void set_InteriorCornerTileIds_11(UInt32U5BU5D_t59386216* value)
	{
		___InteriorCornerTileIds_11 = value;
		Il2CppCodeGenWriteBarrier(&___InteriorCornerTileIds_11, value);
	}
};

struct CarpetBrush_t3722964419_StaticFields
{
public:
	// System.Int32 CreativeSpore.SuperTilemapEditor.CarpetBrush::s_brushId
	int32_t ___s_brushId_12;
	// System.Int32 CreativeSpore.SuperTilemapEditor.CarpetBrush::s_neighIdx
	int32_t ___s_neighIdx_13;
	// System.UInt32 CreativeSpore.SuperTilemapEditor.CarpetBrush::s_tileData
	uint32_t ___s_tileData_14;
	// System.Boolean[] CreativeSpore.SuperTilemapEditor.CarpetBrush::s_showDiagonal
	BooleanU5BU5D_t3568034315* ___s_showDiagonal_15;
	// System.Boolean CreativeSpore.SuperTilemapEditor.CarpetBrush::s_needsSubTiles
	bool ___s_needsSubTiles_16;

public:
	inline static int32_t get_offset_of_s_brushId_12() { return static_cast<int32_t>(offsetof(CarpetBrush_t3722964419_StaticFields, ___s_brushId_12)); }
	inline int32_t get_s_brushId_12() const { return ___s_brushId_12; }
	inline int32_t* get_address_of_s_brushId_12() { return &___s_brushId_12; }
	inline void set_s_brushId_12(int32_t value)
	{
		___s_brushId_12 = value;
	}

	inline static int32_t get_offset_of_s_neighIdx_13() { return static_cast<int32_t>(offsetof(CarpetBrush_t3722964419_StaticFields, ___s_neighIdx_13)); }
	inline int32_t get_s_neighIdx_13() const { return ___s_neighIdx_13; }
	inline int32_t* get_address_of_s_neighIdx_13() { return &___s_neighIdx_13; }
	inline void set_s_neighIdx_13(int32_t value)
	{
		___s_neighIdx_13 = value;
	}

	inline static int32_t get_offset_of_s_tileData_14() { return static_cast<int32_t>(offsetof(CarpetBrush_t3722964419_StaticFields, ___s_tileData_14)); }
	inline uint32_t get_s_tileData_14() const { return ___s_tileData_14; }
	inline uint32_t* get_address_of_s_tileData_14() { return &___s_tileData_14; }
	inline void set_s_tileData_14(uint32_t value)
	{
		___s_tileData_14 = value;
	}

	inline static int32_t get_offset_of_s_showDiagonal_15() { return static_cast<int32_t>(offsetof(CarpetBrush_t3722964419_StaticFields, ___s_showDiagonal_15)); }
	inline BooleanU5BU5D_t3568034315* get_s_showDiagonal_15() const { return ___s_showDiagonal_15; }
	inline BooleanU5BU5D_t3568034315** get_address_of_s_showDiagonal_15() { return &___s_showDiagonal_15; }
	inline void set_s_showDiagonal_15(BooleanU5BU5D_t3568034315* value)
	{
		___s_showDiagonal_15 = value;
		Il2CppCodeGenWriteBarrier(&___s_showDiagonal_15, value);
	}

	inline static int32_t get_offset_of_s_needsSubTiles_16() { return static_cast<int32_t>(offsetof(CarpetBrush_t3722964419_StaticFields, ___s_needsSubTiles_16)); }
	inline bool get_s_needsSubTiles_16() const { return ___s_needsSubTiles_16; }
	inline bool* get_address_of_s_needsSubTiles_16() { return &___s_needsSubTiles_16; }
	inline void set_s_needsSubTiles_16(bool value)
	{
		___s_needsSubTiles_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
