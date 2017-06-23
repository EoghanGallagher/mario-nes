#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// CreativeSpore.SuperTilemapEditor.TileSelection
struct TileSelection_t4182896876;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.TileView
struct  TileView_t1075785905  : public Il2CppObject
{
public:
	// System.String CreativeSpore.SuperTilemapEditor.TileView::m_name
	String_t* ___m_name_0;
	// CreativeSpore.SuperTilemapEditor.TileSelection CreativeSpore.SuperTilemapEditor.TileView::m_tileSelection
	TileSelection_t4182896876 * ___m_tileSelection_1;

public:
	inline static int32_t get_offset_of_m_name_0() { return static_cast<int32_t>(offsetof(TileView_t1075785905, ___m_name_0)); }
	inline String_t* get_m_name_0() const { return ___m_name_0; }
	inline String_t** get_address_of_m_name_0() { return &___m_name_0; }
	inline void set_m_name_0(String_t* value)
	{
		___m_name_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_name_0, value);
	}

	inline static int32_t get_offset_of_m_tileSelection_1() { return static_cast<int32_t>(offsetof(TileView_t1075785905, ___m_tileSelection_1)); }
	inline TileSelection_t4182896876 * get_m_tileSelection_1() const { return ___m_tileSelection_1; }
	inline TileSelection_t4182896876 ** get_address_of_m_tileSelection_1() { return &___m_tileSelection_1; }
	inline void set_m_tileSelection_1(TileSelection_t4182896876 * value)
	{
		___m_tileSelection_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_tileSelection_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
