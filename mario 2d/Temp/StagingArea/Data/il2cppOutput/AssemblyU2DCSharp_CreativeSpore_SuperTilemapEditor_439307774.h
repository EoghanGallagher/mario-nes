#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"
#include "AssemblyU2DCSharp_CreativeSpore_SuperTilemapEditor_742469574.h"

// CreativeSpore.SuperTilemapEditor.Tileset
struct Tileset_t2366016026;
// CreativeSpore.SuperTilemapEditor.ParameterContainer
struct ParameterContainer_t3296704120;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.TilesetBrush
struct  TilesetBrush_t439307774  : public ScriptableObject_t1975622470
{
public:
	// CreativeSpore.SuperTilemapEditor.Tileset CreativeSpore.SuperTilemapEditor.TilesetBrush::Tileset
	Tileset_t2366016026 * ___Tileset_2;
	// CreativeSpore.SuperTilemapEditor.ParameterContainer CreativeSpore.SuperTilemapEditor.TilesetBrush::Params
	ParameterContainer_t3296704120 * ___Params_3;
	// System.Int32 CreativeSpore.SuperTilemapEditor.TilesetBrush::m_group
	int32_t ___m_group_4;
	// CreativeSpore.SuperTilemapEditor.eAutotilingMode CreativeSpore.SuperTilemapEditor.TilesetBrush::m_autotilingMode
	int32_t ___m_autotilingMode_5;
	// System.Boolean CreativeSpore.SuperTilemapEditor.TilesetBrush::m_showInPalette
	bool ___m_showInPalette_6;
	// UnityEngine.Vector2[] CreativeSpore.SuperTilemapEditor.TilesetBrush::m_uvWithFlags
	Vector2U5BU5D_t686124026* ___m_uvWithFlags_8;
	// System.Int32 CreativeSpore.SuperTilemapEditor.TilesetBrush::m_lastFrameToken
	int32_t ___m_lastFrameToken_9;

public:
	inline static int32_t get_offset_of_Tileset_2() { return static_cast<int32_t>(offsetof(TilesetBrush_t439307774, ___Tileset_2)); }
	inline Tileset_t2366016026 * get_Tileset_2() const { return ___Tileset_2; }
	inline Tileset_t2366016026 ** get_address_of_Tileset_2() { return &___Tileset_2; }
	inline void set_Tileset_2(Tileset_t2366016026 * value)
	{
		___Tileset_2 = value;
		Il2CppCodeGenWriteBarrier(&___Tileset_2, value);
	}

	inline static int32_t get_offset_of_Params_3() { return static_cast<int32_t>(offsetof(TilesetBrush_t439307774, ___Params_3)); }
	inline ParameterContainer_t3296704120 * get_Params_3() const { return ___Params_3; }
	inline ParameterContainer_t3296704120 ** get_address_of_Params_3() { return &___Params_3; }
	inline void set_Params_3(ParameterContainer_t3296704120 * value)
	{
		___Params_3 = value;
		Il2CppCodeGenWriteBarrier(&___Params_3, value);
	}

	inline static int32_t get_offset_of_m_group_4() { return static_cast<int32_t>(offsetof(TilesetBrush_t439307774, ___m_group_4)); }
	inline int32_t get_m_group_4() const { return ___m_group_4; }
	inline int32_t* get_address_of_m_group_4() { return &___m_group_4; }
	inline void set_m_group_4(int32_t value)
	{
		___m_group_4 = value;
	}

	inline static int32_t get_offset_of_m_autotilingMode_5() { return static_cast<int32_t>(offsetof(TilesetBrush_t439307774, ___m_autotilingMode_5)); }
	inline int32_t get_m_autotilingMode_5() const { return ___m_autotilingMode_5; }
	inline int32_t* get_address_of_m_autotilingMode_5() { return &___m_autotilingMode_5; }
	inline void set_m_autotilingMode_5(int32_t value)
	{
		___m_autotilingMode_5 = value;
	}

	inline static int32_t get_offset_of_m_showInPalette_6() { return static_cast<int32_t>(offsetof(TilesetBrush_t439307774, ___m_showInPalette_6)); }
	inline bool get_m_showInPalette_6() const { return ___m_showInPalette_6; }
	inline bool* get_address_of_m_showInPalette_6() { return &___m_showInPalette_6; }
	inline void set_m_showInPalette_6(bool value)
	{
		___m_showInPalette_6 = value;
	}

	inline static int32_t get_offset_of_m_uvWithFlags_8() { return static_cast<int32_t>(offsetof(TilesetBrush_t439307774, ___m_uvWithFlags_8)); }
	inline Vector2U5BU5D_t686124026* get_m_uvWithFlags_8() const { return ___m_uvWithFlags_8; }
	inline Vector2U5BU5D_t686124026** get_address_of_m_uvWithFlags_8() { return &___m_uvWithFlags_8; }
	inline void set_m_uvWithFlags_8(Vector2U5BU5D_t686124026* value)
	{
		___m_uvWithFlags_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_uvWithFlags_8, value);
	}

	inline static int32_t get_offset_of_m_lastFrameToken_9() { return static_cast<int32_t>(offsetof(TilesetBrush_t439307774, ___m_lastFrameToken_9)); }
	inline int32_t get_m_lastFrameToken_9() const { return ___m_lastFrameToken_9; }
	inline int32_t* get_address_of_m_lastFrameToken_9() { return &___m_lastFrameToken_9; }
	inline void set_m_lastFrameToken_9(int32_t value)
	{
		___m_lastFrameToken_9 = value;
	}
};

struct TilesetBrush_t439307774_StaticFields
{
public:
	// System.Boolean CreativeSpore.SuperTilemapEditor.TilesetBrush::s_refreshingLinkedBrush
	bool ___s_refreshingLinkedBrush_7;

public:
	inline static int32_t get_offset_of_s_refreshingLinkedBrush_7() { return static_cast<int32_t>(offsetof(TilesetBrush_t439307774_StaticFields, ___s_refreshingLinkedBrush_7)); }
	inline bool get_s_refreshingLinkedBrush_7() const { return ___s_refreshingLinkedBrush_7; }
	inline bool* get_address_of_s_refreshingLinkedBrush_7() { return &___s_refreshingLinkedBrush_7; }
	inline void set_s_refreshingLinkedBrush_7(bool value)
	{
		___s_refreshingLinkedBrush_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
