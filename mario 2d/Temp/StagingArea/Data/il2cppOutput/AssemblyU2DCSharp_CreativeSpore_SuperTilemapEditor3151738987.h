#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_CreativeSpore_SuperTilemapEditor2038838468.h"

// CreativeSpore.SuperTilemapEditor.BrushBehaviour
struct BrushBehaviour_t3151738987;
// CreativeSpore.SuperTilemapEditor.Tilemap
struct Tilemap_t342945180;
// System.UInt32[0...,0...]
struct UInt32U5BU2CU5D_t59386217;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.BrushBehaviour
struct  BrushBehaviour_t3151738987  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 CreativeSpore.SuperTilemapEditor.BrushBehaviour::Offset
	Vector2_t2243707579  ___Offset_3;
	// System.Boolean CreativeSpore.SuperTilemapEditor.BrushBehaviour::IsUndoEnabled
	bool ___IsUndoEnabled_4;
	// CreativeSpore.SuperTilemapEditor.Tilemap CreativeSpore.SuperTilemapEditor.BrushBehaviour::m_brushTilemap
	Tilemap_t342945180 * ___m_brushTilemap_5;
	// CreativeSpore.SuperTilemapEditor.BrushBehaviour/eBrushPaintMode CreativeSpore.SuperTilemapEditor.BrushBehaviour::m_paintMode
	int32_t ___m_paintMode_6;
	// UnityEngine.Vector2 CreativeSpore.SuperTilemapEditor.BrushBehaviour::m_pressedPosition
	Vector2_t2243707579  ___m_pressedPosition_7;
	// System.UInt32[0...,0...] CreativeSpore.SuperTilemapEditor.BrushBehaviour::m_brushPattern
	UInt32U5BU2CU5D_t59386217* ___m_brushPattern_8;
	// System.Boolean CreativeSpore.SuperTilemapEditor.BrushBehaviour::m_isDragging
	bool ___m_isDragging_9;

public:
	inline static int32_t get_offset_of_Offset_3() { return static_cast<int32_t>(offsetof(BrushBehaviour_t3151738987, ___Offset_3)); }
	inline Vector2_t2243707579  get_Offset_3() const { return ___Offset_3; }
	inline Vector2_t2243707579 * get_address_of_Offset_3() { return &___Offset_3; }
	inline void set_Offset_3(Vector2_t2243707579  value)
	{
		___Offset_3 = value;
	}

	inline static int32_t get_offset_of_IsUndoEnabled_4() { return static_cast<int32_t>(offsetof(BrushBehaviour_t3151738987, ___IsUndoEnabled_4)); }
	inline bool get_IsUndoEnabled_4() const { return ___IsUndoEnabled_4; }
	inline bool* get_address_of_IsUndoEnabled_4() { return &___IsUndoEnabled_4; }
	inline void set_IsUndoEnabled_4(bool value)
	{
		___IsUndoEnabled_4 = value;
	}

	inline static int32_t get_offset_of_m_brushTilemap_5() { return static_cast<int32_t>(offsetof(BrushBehaviour_t3151738987, ___m_brushTilemap_5)); }
	inline Tilemap_t342945180 * get_m_brushTilemap_5() const { return ___m_brushTilemap_5; }
	inline Tilemap_t342945180 ** get_address_of_m_brushTilemap_5() { return &___m_brushTilemap_5; }
	inline void set_m_brushTilemap_5(Tilemap_t342945180 * value)
	{
		___m_brushTilemap_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_brushTilemap_5, value);
	}

	inline static int32_t get_offset_of_m_paintMode_6() { return static_cast<int32_t>(offsetof(BrushBehaviour_t3151738987, ___m_paintMode_6)); }
	inline int32_t get_m_paintMode_6() const { return ___m_paintMode_6; }
	inline int32_t* get_address_of_m_paintMode_6() { return &___m_paintMode_6; }
	inline void set_m_paintMode_6(int32_t value)
	{
		___m_paintMode_6 = value;
	}

	inline static int32_t get_offset_of_m_pressedPosition_7() { return static_cast<int32_t>(offsetof(BrushBehaviour_t3151738987, ___m_pressedPosition_7)); }
	inline Vector2_t2243707579  get_m_pressedPosition_7() const { return ___m_pressedPosition_7; }
	inline Vector2_t2243707579 * get_address_of_m_pressedPosition_7() { return &___m_pressedPosition_7; }
	inline void set_m_pressedPosition_7(Vector2_t2243707579  value)
	{
		___m_pressedPosition_7 = value;
	}

	inline static int32_t get_offset_of_m_brushPattern_8() { return static_cast<int32_t>(offsetof(BrushBehaviour_t3151738987, ___m_brushPattern_8)); }
	inline UInt32U5BU2CU5D_t59386217* get_m_brushPattern_8() const { return ___m_brushPattern_8; }
	inline UInt32U5BU2CU5D_t59386217** get_address_of_m_brushPattern_8() { return &___m_brushPattern_8; }
	inline void set_m_brushPattern_8(UInt32U5BU2CU5D_t59386217* value)
	{
		___m_brushPattern_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_brushPattern_8, value);
	}

	inline static int32_t get_offset_of_m_isDragging_9() { return static_cast<int32_t>(offsetof(BrushBehaviour_t3151738987, ___m_isDragging_9)); }
	inline bool get_m_isDragging_9() const { return ___m_isDragging_9; }
	inline bool* get_address_of_m_isDragging_9() { return &___m_isDragging_9; }
	inline void set_m_isDragging_9(bool value)
	{
		___m_isDragging_9 = value;
	}
};

struct BrushBehaviour_t3151738987_StaticFields
{
public:
	// CreativeSpore.SuperTilemapEditor.BrushBehaviour CreativeSpore.SuperTilemapEditor.BrushBehaviour::s_instance
	BrushBehaviour_t3151738987 * ___s_instance_2;

public:
	inline static int32_t get_offset_of_s_instance_2() { return static_cast<int32_t>(offsetof(BrushBehaviour_t3151738987_StaticFields, ___s_instance_2)); }
	inline BrushBehaviour_t3151738987 * get_s_instance_2() const { return ___s_instance_2; }
	inline BrushBehaviour_t3151738987 ** get_address_of_s_instance_2() { return &___s_instance_2; }
	inline void set_s_instance_2(BrushBehaviour_t3151738987 * value)
	{
		___s_instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
