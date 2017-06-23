#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_CreativeSpore_SuperTilemapEditor2997667091.h"
#include "AssemblyU2DCSharp_CreativeSpore_SuperTilemapEditor_379302989.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"

// System.String
struct String_t;
// CreativeSpore.SuperTilemapEditor.Tilemap/OnMeshUpdatedDelegate
struct OnMeshUpdatedDelegate_t878291361;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t578636151;
// UnityEngine.PhysicsMaterial2D
struct PhysicsMaterial2D_t851691520;
// CreativeSpore.SuperTilemapEditor.Tileset
struct Tileset_t2366016026;
// CreativeSpore.SuperTilemapEditor.TilemapGroup
struct TilemapGroup_t634038063;
// System.Collections.Generic.Dictionary`2<System.UInt32,CreativeSpore.SuperTilemapEditor.TilemapChunk>
struct Dictionary_2_t2168769145;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.Tilemap
struct  Tilemap_t342945180  : public MonoBehaviour_t1158329972
{
public:
	// CreativeSpore.SuperTilemapEditor.Tilemap/OnMeshUpdatedDelegate CreativeSpore.SuperTilemapEditor.Tilemap::OnMeshUpdated
	OnMeshUpdatedDelegate_t878291361 * ___OnMeshUpdated_5;
	// System.Boolean CreativeSpore.SuperTilemapEditor.Tilemap::ShowGrid
	bool ___ShowGrid_6;
	// System.Single CreativeSpore.SuperTilemapEditor.Tilemap::InnerPadding
	float ___InnerPadding_7;
	// System.Single CreativeSpore.SuperTilemapEditor.Tilemap::ColliderDepth
	float ___ColliderDepth_8;
	// CreativeSpore.SuperTilemapEditor.eColliderType CreativeSpore.SuperTilemapEditor.Tilemap::ColliderType
	int32_t ___ColliderType_9;
	// CreativeSpore.SuperTilemapEditor.e2DColliderType CreativeSpore.SuperTilemapEditor.Tilemap::Collider2DType
	int32_t ___Collider2DType_10;
	// System.Boolean CreativeSpore.SuperTilemapEditor.Tilemap::ShowColliderNormals
	bool ___ShowColliderNormals_11;
	// System.Boolean CreativeSpore.SuperTilemapEditor.Tilemap::IsUndoEnabled
	bool ___IsUndoEnabled_12;
	// System.Int32 CreativeSpore.SuperTilemapEditor.Tilemap::m_sortingLayer
	int32_t ___m_sortingLayer_13;
	// System.String CreativeSpore.SuperTilemapEditor.Tilemap::m_sortingLayerName
	String_t* ___m_sortingLayerName_14;
	// System.Int32 CreativeSpore.SuperTilemapEditor.Tilemap::m_orderInLayer
	int32_t ___m_orderInLayer_15;
	// UnityEngine.Material CreativeSpore.SuperTilemapEditor.Tilemap::m_material
	Material_t193706927 * ___m_material_16;
	// UnityEngine.Color CreativeSpore.SuperTilemapEditor.Tilemap::m_tintColor
	Color_t2020392075  ___m_tintColor_17;
	// System.Boolean CreativeSpore.SuperTilemapEditor.Tilemap::m_pixelSnap
	bool ___m_pixelSnap_18;
	// System.Boolean CreativeSpore.SuperTilemapEditor.Tilemap::m_isVisible
	bool ___m_isVisible_19;
	// System.Boolean CreativeSpore.SuperTilemapEditor.Tilemap::m_allowPaintingOutOfBounds
	bool ___m_allowPaintingOutOfBounds_20;
	// System.Boolean CreativeSpore.SuperTilemapEditor.Tilemap::m_autoShrink
	bool ___m_autoShrink_21;
	// System.Boolean CreativeSpore.SuperTilemapEditor.Tilemap::m_enableUndoWhilePainting
	bool ___m_enableUndoWhilePainting_22;
	// System.Boolean CreativeSpore.SuperTilemapEditor.Tilemap::m_isTrigger
	bool ___m_isTrigger_23;
	// UnityEngine.PhysicMaterial CreativeSpore.SuperTilemapEditor.Tilemap::m_physicMaterial
	PhysicMaterial_t578636151 * ___m_physicMaterial_24;
	// UnityEngine.PhysicsMaterial2D CreativeSpore.SuperTilemapEditor.Tilemap::m_physicMaterial2D
	PhysicsMaterial2D_t851691520 * ___m_physicMaterial2D_25;
	// UnityEngine.Vector2 CreativeSpore.SuperTilemapEditor.Tilemap::m_cellSize
	Vector2_t2243707579  ___m_cellSize_26;
	// UnityEngine.Bounds CreativeSpore.SuperTilemapEditor.Tilemap::m_mapBounds
	Bounds_t3033363703  ___m_mapBounds_27;
	// CreativeSpore.SuperTilemapEditor.Tileset CreativeSpore.SuperTilemapEditor.Tilemap::m_tileset
	Tileset_t2366016026 * ___m_tileset_28;
	// System.Int32 CreativeSpore.SuperTilemapEditor.Tilemap::m_minGridX
	int32_t ___m_minGridX_29;
	// System.Int32 CreativeSpore.SuperTilemapEditor.Tilemap::m_minGridY
	int32_t ___m_minGridY_30;
	// System.Int32 CreativeSpore.SuperTilemapEditor.Tilemap::m_maxGridX
	int32_t ___m_maxGridX_31;
	// System.Int32 CreativeSpore.SuperTilemapEditor.Tilemap::m_maxGridY
	int32_t ___m_maxGridY_32;
	// CreativeSpore.SuperTilemapEditor.TilemapGroup CreativeSpore.SuperTilemapEditor.Tilemap::m_parentTilemapGroup
	TilemapGroup_t634038063 * ___m_parentTilemapGroup_33;
	// System.Boolean CreativeSpore.SuperTilemapEditor.Tilemap::m_markForUpdateMesh
	bool ___m_markForUpdateMesh_34;
	// System.Boolean CreativeSpore.SuperTilemapEditor.Tilemap::m_markSceneDirtyOnNextUpdateMesh
	bool ___m_markSceneDirtyOnNextUpdateMesh_35;
	// System.Boolean CreativeSpore.SuperTilemapEditor.Tilemap::m_applyContactsEmptyFix
	bool ___m_applyContactsEmptyFix_36;
	// System.Collections.Generic.Dictionary`2<System.UInt32,CreativeSpore.SuperTilemapEditor.TilemapChunk> CreativeSpore.SuperTilemapEditor.Tilemap::m_dicChunkCache
	Dictionary_2_t2168769145 * ___m_dicChunkCache_37;

public:
	inline static int32_t get_offset_of_OnMeshUpdated_5() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___OnMeshUpdated_5)); }
	inline OnMeshUpdatedDelegate_t878291361 * get_OnMeshUpdated_5() const { return ___OnMeshUpdated_5; }
	inline OnMeshUpdatedDelegate_t878291361 ** get_address_of_OnMeshUpdated_5() { return &___OnMeshUpdated_5; }
	inline void set_OnMeshUpdated_5(OnMeshUpdatedDelegate_t878291361 * value)
	{
		___OnMeshUpdated_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnMeshUpdated_5, value);
	}

	inline static int32_t get_offset_of_ShowGrid_6() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___ShowGrid_6)); }
	inline bool get_ShowGrid_6() const { return ___ShowGrid_6; }
	inline bool* get_address_of_ShowGrid_6() { return &___ShowGrid_6; }
	inline void set_ShowGrid_6(bool value)
	{
		___ShowGrid_6 = value;
	}

	inline static int32_t get_offset_of_InnerPadding_7() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___InnerPadding_7)); }
	inline float get_InnerPadding_7() const { return ___InnerPadding_7; }
	inline float* get_address_of_InnerPadding_7() { return &___InnerPadding_7; }
	inline void set_InnerPadding_7(float value)
	{
		___InnerPadding_7 = value;
	}

	inline static int32_t get_offset_of_ColliderDepth_8() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___ColliderDepth_8)); }
	inline float get_ColliderDepth_8() const { return ___ColliderDepth_8; }
	inline float* get_address_of_ColliderDepth_8() { return &___ColliderDepth_8; }
	inline void set_ColliderDepth_8(float value)
	{
		___ColliderDepth_8 = value;
	}

	inline static int32_t get_offset_of_ColliderType_9() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___ColliderType_9)); }
	inline int32_t get_ColliderType_9() const { return ___ColliderType_9; }
	inline int32_t* get_address_of_ColliderType_9() { return &___ColliderType_9; }
	inline void set_ColliderType_9(int32_t value)
	{
		___ColliderType_9 = value;
	}

	inline static int32_t get_offset_of_Collider2DType_10() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___Collider2DType_10)); }
	inline int32_t get_Collider2DType_10() const { return ___Collider2DType_10; }
	inline int32_t* get_address_of_Collider2DType_10() { return &___Collider2DType_10; }
	inline void set_Collider2DType_10(int32_t value)
	{
		___Collider2DType_10 = value;
	}

	inline static int32_t get_offset_of_ShowColliderNormals_11() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___ShowColliderNormals_11)); }
	inline bool get_ShowColliderNormals_11() const { return ___ShowColliderNormals_11; }
	inline bool* get_address_of_ShowColliderNormals_11() { return &___ShowColliderNormals_11; }
	inline void set_ShowColliderNormals_11(bool value)
	{
		___ShowColliderNormals_11 = value;
	}

	inline static int32_t get_offset_of_IsUndoEnabled_12() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___IsUndoEnabled_12)); }
	inline bool get_IsUndoEnabled_12() const { return ___IsUndoEnabled_12; }
	inline bool* get_address_of_IsUndoEnabled_12() { return &___IsUndoEnabled_12; }
	inline void set_IsUndoEnabled_12(bool value)
	{
		___IsUndoEnabled_12 = value;
	}

	inline static int32_t get_offset_of_m_sortingLayer_13() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_sortingLayer_13)); }
	inline int32_t get_m_sortingLayer_13() const { return ___m_sortingLayer_13; }
	inline int32_t* get_address_of_m_sortingLayer_13() { return &___m_sortingLayer_13; }
	inline void set_m_sortingLayer_13(int32_t value)
	{
		___m_sortingLayer_13 = value;
	}

	inline static int32_t get_offset_of_m_sortingLayerName_14() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_sortingLayerName_14)); }
	inline String_t* get_m_sortingLayerName_14() const { return ___m_sortingLayerName_14; }
	inline String_t** get_address_of_m_sortingLayerName_14() { return &___m_sortingLayerName_14; }
	inline void set_m_sortingLayerName_14(String_t* value)
	{
		___m_sortingLayerName_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_sortingLayerName_14, value);
	}

	inline static int32_t get_offset_of_m_orderInLayer_15() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_orderInLayer_15)); }
	inline int32_t get_m_orderInLayer_15() const { return ___m_orderInLayer_15; }
	inline int32_t* get_address_of_m_orderInLayer_15() { return &___m_orderInLayer_15; }
	inline void set_m_orderInLayer_15(int32_t value)
	{
		___m_orderInLayer_15 = value;
	}

	inline static int32_t get_offset_of_m_material_16() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_material_16)); }
	inline Material_t193706927 * get_m_material_16() const { return ___m_material_16; }
	inline Material_t193706927 ** get_address_of_m_material_16() { return &___m_material_16; }
	inline void set_m_material_16(Material_t193706927 * value)
	{
		___m_material_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_material_16, value);
	}

	inline static int32_t get_offset_of_m_tintColor_17() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_tintColor_17)); }
	inline Color_t2020392075  get_m_tintColor_17() const { return ___m_tintColor_17; }
	inline Color_t2020392075 * get_address_of_m_tintColor_17() { return &___m_tintColor_17; }
	inline void set_m_tintColor_17(Color_t2020392075  value)
	{
		___m_tintColor_17 = value;
	}

	inline static int32_t get_offset_of_m_pixelSnap_18() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_pixelSnap_18)); }
	inline bool get_m_pixelSnap_18() const { return ___m_pixelSnap_18; }
	inline bool* get_address_of_m_pixelSnap_18() { return &___m_pixelSnap_18; }
	inline void set_m_pixelSnap_18(bool value)
	{
		___m_pixelSnap_18 = value;
	}

	inline static int32_t get_offset_of_m_isVisible_19() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_isVisible_19)); }
	inline bool get_m_isVisible_19() const { return ___m_isVisible_19; }
	inline bool* get_address_of_m_isVisible_19() { return &___m_isVisible_19; }
	inline void set_m_isVisible_19(bool value)
	{
		___m_isVisible_19 = value;
	}

	inline static int32_t get_offset_of_m_allowPaintingOutOfBounds_20() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_allowPaintingOutOfBounds_20)); }
	inline bool get_m_allowPaintingOutOfBounds_20() const { return ___m_allowPaintingOutOfBounds_20; }
	inline bool* get_address_of_m_allowPaintingOutOfBounds_20() { return &___m_allowPaintingOutOfBounds_20; }
	inline void set_m_allowPaintingOutOfBounds_20(bool value)
	{
		___m_allowPaintingOutOfBounds_20 = value;
	}

	inline static int32_t get_offset_of_m_autoShrink_21() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_autoShrink_21)); }
	inline bool get_m_autoShrink_21() const { return ___m_autoShrink_21; }
	inline bool* get_address_of_m_autoShrink_21() { return &___m_autoShrink_21; }
	inline void set_m_autoShrink_21(bool value)
	{
		___m_autoShrink_21 = value;
	}

	inline static int32_t get_offset_of_m_enableUndoWhilePainting_22() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_enableUndoWhilePainting_22)); }
	inline bool get_m_enableUndoWhilePainting_22() const { return ___m_enableUndoWhilePainting_22; }
	inline bool* get_address_of_m_enableUndoWhilePainting_22() { return &___m_enableUndoWhilePainting_22; }
	inline void set_m_enableUndoWhilePainting_22(bool value)
	{
		___m_enableUndoWhilePainting_22 = value;
	}

	inline static int32_t get_offset_of_m_isTrigger_23() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_isTrigger_23)); }
	inline bool get_m_isTrigger_23() const { return ___m_isTrigger_23; }
	inline bool* get_address_of_m_isTrigger_23() { return &___m_isTrigger_23; }
	inline void set_m_isTrigger_23(bool value)
	{
		___m_isTrigger_23 = value;
	}

	inline static int32_t get_offset_of_m_physicMaterial_24() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_physicMaterial_24)); }
	inline PhysicMaterial_t578636151 * get_m_physicMaterial_24() const { return ___m_physicMaterial_24; }
	inline PhysicMaterial_t578636151 ** get_address_of_m_physicMaterial_24() { return &___m_physicMaterial_24; }
	inline void set_m_physicMaterial_24(PhysicMaterial_t578636151 * value)
	{
		___m_physicMaterial_24 = value;
		Il2CppCodeGenWriteBarrier(&___m_physicMaterial_24, value);
	}

	inline static int32_t get_offset_of_m_physicMaterial2D_25() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_physicMaterial2D_25)); }
	inline PhysicsMaterial2D_t851691520 * get_m_physicMaterial2D_25() const { return ___m_physicMaterial2D_25; }
	inline PhysicsMaterial2D_t851691520 ** get_address_of_m_physicMaterial2D_25() { return &___m_physicMaterial2D_25; }
	inline void set_m_physicMaterial2D_25(PhysicsMaterial2D_t851691520 * value)
	{
		___m_physicMaterial2D_25 = value;
		Il2CppCodeGenWriteBarrier(&___m_physicMaterial2D_25, value);
	}

	inline static int32_t get_offset_of_m_cellSize_26() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_cellSize_26)); }
	inline Vector2_t2243707579  get_m_cellSize_26() const { return ___m_cellSize_26; }
	inline Vector2_t2243707579 * get_address_of_m_cellSize_26() { return &___m_cellSize_26; }
	inline void set_m_cellSize_26(Vector2_t2243707579  value)
	{
		___m_cellSize_26 = value;
	}

	inline static int32_t get_offset_of_m_mapBounds_27() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_mapBounds_27)); }
	inline Bounds_t3033363703  get_m_mapBounds_27() const { return ___m_mapBounds_27; }
	inline Bounds_t3033363703 * get_address_of_m_mapBounds_27() { return &___m_mapBounds_27; }
	inline void set_m_mapBounds_27(Bounds_t3033363703  value)
	{
		___m_mapBounds_27 = value;
	}

	inline static int32_t get_offset_of_m_tileset_28() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_tileset_28)); }
	inline Tileset_t2366016026 * get_m_tileset_28() const { return ___m_tileset_28; }
	inline Tileset_t2366016026 ** get_address_of_m_tileset_28() { return &___m_tileset_28; }
	inline void set_m_tileset_28(Tileset_t2366016026 * value)
	{
		___m_tileset_28 = value;
		Il2CppCodeGenWriteBarrier(&___m_tileset_28, value);
	}

	inline static int32_t get_offset_of_m_minGridX_29() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_minGridX_29)); }
	inline int32_t get_m_minGridX_29() const { return ___m_minGridX_29; }
	inline int32_t* get_address_of_m_minGridX_29() { return &___m_minGridX_29; }
	inline void set_m_minGridX_29(int32_t value)
	{
		___m_minGridX_29 = value;
	}

	inline static int32_t get_offset_of_m_minGridY_30() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_minGridY_30)); }
	inline int32_t get_m_minGridY_30() const { return ___m_minGridY_30; }
	inline int32_t* get_address_of_m_minGridY_30() { return &___m_minGridY_30; }
	inline void set_m_minGridY_30(int32_t value)
	{
		___m_minGridY_30 = value;
	}

	inline static int32_t get_offset_of_m_maxGridX_31() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_maxGridX_31)); }
	inline int32_t get_m_maxGridX_31() const { return ___m_maxGridX_31; }
	inline int32_t* get_address_of_m_maxGridX_31() { return &___m_maxGridX_31; }
	inline void set_m_maxGridX_31(int32_t value)
	{
		___m_maxGridX_31 = value;
	}

	inline static int32_t get_offset_of_m_maxGridY_32() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_maxGridY_32)); }
	inline int32_t get_m_maxGridY_32() const { return ___m_maxGridY_32; }
	inline int32_t* get_address_of_m_maxGridY_32() { return &___m_maxGridY_32; }
	inline void set_m_maxGridY_32(int32_t value)
	{
		___m_maxGridY_32 = value;
	}

	inline static int32_t get_offset_of_m_parentTilemapGroup_33() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_parentTilemapGroup_33)); }
	inline TilemapGroup_t634038063 * get_m_parentTilemapGroup_33() const { return ___m_parentTilemapGroup_33; }
	inline TilemapGroup_t634038063 ** get_address_of_m_parentTilemapGroup_33() { return &___m_parentTilemapGroup_33; }
	inline void set_m_parentTilemapGroup_33(TilemapGroup_t634038063 * value)
	{
		___m_parentTilemapGroup_33 = value;
		Il2CppCodeGenWriteBarrier(&___m_parentTilemapGroup_33, value);
	}

	inline static int32_t get_offset_of_m_markForUpdateMesh_34() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_markForUpdateMesh_34)); }
	inline bool get_m_markForUpdateMesh_34() const { return ___m_markForUpdateMesh_34; }
	inline bool* get_address_of_m_markForUpdateMesh_34() { return &___m_markForUpdateMesh_34; }
	inline void set_m_markForUpdateMesh_34(bool value)
	{
		___m_markForUpdateMesh_34 = value;
	}

	inline static int32_t get_offset_of_m_markSceneDirtyOnNextUpdateMesh_35() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_markSceneDirtyOnNextUpdateMesh_35)); }
	inline bool get_m_markSceneDirtyOnNextUpdateMesh_35() const { return ___m_markSceneDirtyOnNextUpdateMesh_35; }
	inline bool* get_address_of_m_markSceneDirtyOnNextUpdateMesh_35() { return &___m_markSceneDirtyOnNextUpdateMesh_35; }
	inline void set_m_markSceneDirtyOnNextUpdateMesh_35(bool value)
	{
		___m_markSceneDirtyOnNextUpdateMesh_35 = value;
	}

	inline static int32_t get_offset_of_m_applyContactsEmptyFix_36() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_applyContactsEmptyFix_36)); }
	inline bool get_m_applyContactsEmptyFix_36() const { return ___m_applyContactsEmptyFix_36; }
	inline bool* get_address_of_m_applyContactsEmptyFix_36() { return &___m_applyContactsEmptyFix_36; }
	inline void set_m_applyContactsEmptyFix_36(bool value)
	{
		___m_applyContactsEmptyFix_36 = value;
	}

	inline static int32_t get_offset_of_m_dicChunkCache_37() { return static_cast<int32_t>(offsetof(Tilemap_t342945180, ___m_dicChunkCache_37)); }
	inline Dictionary_2_t2168769145 * get_m_dicChunkCache_37() const { return ___m_dicChunkCache_37; }
	inline Dictionary_2_t2168769145 ** get_address_of_m_dicChunkCache_37() { return &___m_dicChunkCache_37; }
	inline void set_m_dicChunkCache_37(Dictionary_2_t2168769145 * value)
	{
		___m_dicChunkCache_37 = value;
		Il2CppCodeGenWriteBarrier(&___m_dicChunkCache_37, value);
	}
};

struct Tilemap_t342945180_StaticFields
{
public:
	// System.Boolean CreativeSpore.SuperTilemapEditor.Tilemap::DisableTilePrefabCreation
	bool ___DisableTilePrefabCreation_4;

public:
	inline static int32_t get_offset_of_DisableTilePrefabCreation_4() { return static_cast<int32_t>(offsetof(Tilemap_t342945180_StaticFields, ___DisableTilePrefabCreation_4)); }
	inline bool get_DisableTilePrefabCreation_4() const { return ___DisableTilePrefabCreation_4; }
	inline bool* get_address_of_DisableTilePrefabCreation_4() { return &___DisableTilePrefabCreation_4; }
	inline void set_DisableTilePrefabCreation_4(bool value)
	{
		___DisableTilePrefabCreation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
