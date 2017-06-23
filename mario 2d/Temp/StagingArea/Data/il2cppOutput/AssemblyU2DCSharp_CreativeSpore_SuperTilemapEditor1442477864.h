#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_CreativeSpore_SuperTilemapEditor_439307774.h"

// System.UInt32[]
struct UInt32U5BU5D_t59386216;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.RoadBrush
struct  RoadBrush_t1442477864  : public TilesetBrush_t439307774
{
public:
	// System.UInt32[] CreativeSpore.SuperTilemapEditor.RoadBrush::TileIds
	UInt32U5BU5D_t59386216* ___TileIds_10;

public:
	inline static int32_t get_offset_of_TileIds_10() { return static_cast<int32_t>(offsetof(RoadBrush_t1442477864, ___TileIds_10)); }
	inline UInt32U5BU5D_t59386216* get_TileIds_10() const { return ___TileIds_10; }
	inline UInt32U5BU5D_t59386216** get_address_of_TileIds_10() { return &___TileIds_10; }
	inline void set_TileIds_10(UInt32U5BU5D_t59386216* value)
	{
		___TileIds_10 = value;
		Il2CppCodeGenWriteBarrier(&___TileIds_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
