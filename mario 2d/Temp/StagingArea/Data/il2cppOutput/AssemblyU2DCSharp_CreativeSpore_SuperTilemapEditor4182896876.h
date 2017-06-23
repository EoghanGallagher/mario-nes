#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t1518803153;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.TileSelection
struct  TileSelection_t4182896876  : public Il2CppObject
{
public:
	// System.Int32 CreativeSpore.SuperTilemapEditor.TileSelection::m_rowLength
	int32_t ___m_rowLength_0;
	// System.Collections.Generic.List`1<System.UInt32> CreativeSpore.SuperTilemapEditor.TileSelection::m_tileIds
	List_1_t1518803153 * ___m_tileIds_1;

public:
	inline static int32_t get_offset_of_m_rowLength_0() { return static_cast<int32_t>(offsetof(TileSelection_t4182896876, ___m_rowLength_0)); }
	inline int32_t get_m_rowLength_0() const { return ___m_rowLength_0; }
	inline int32_t* get_address_of_m_rowLength_0() { return &___m_rowLength_0; }
	inline void set_m_rowLength_0(int32_t value)
	{
		___m_rowLength_0 = value;
	}

	inline static int32_t get_offset_of_m_tileIds_1() { return static_cast<int32_t>(offsetof(TileSelection_t4182896876, ___m_tileIds_1)); }
	inline List_1_t1518803153 * get_m_tileIds_1() const { return ___m_tileIds_1; }
	inline List_1_t1518803153 ** get_address_of_m_tileIds_1() { return &___m_tileIds_1; }
	inline void set_m_tileIds_1(List_1_t1518803153 * value)
	{
		___m_tileIds_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_tileIds_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
