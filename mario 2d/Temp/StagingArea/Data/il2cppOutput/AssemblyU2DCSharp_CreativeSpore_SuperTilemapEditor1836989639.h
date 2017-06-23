#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// CreativeSpore.SuperTilemapEditor.Tilemap
struct Tilemap_t342945180;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t1518803153;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.Collections.Generic.List`1<CreativeSpore.SuperTilemapEditor.TilemapChunk/AnimTileData>
struct List_1_t644189081;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t3303648957;
// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>
struct Dictionary_2_t3590089903;
// UnityEngine.MeshCollider
struct MeshCollider_t2718867283;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// System.Collections.Generic.List`1<System.Collections.Generic.LinkedList`1<UnityEngine.Vector2>>
struct List_1_t1917536940;
// CreativeSpore.SuperTilemapEditor.TileColliderData[]
struct TileColliderDataU5BU5D_t3462461955;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// CreativeSpore.SuperTilemapEditor.TilemapChunk
struct TilemapChunk_t1836989639;
// System.String
struct String_t;
// System.Collections.Generic.List`1<CreativeSpore.SuperTilemapEditor.TilemapChunk/TileObjData>
struct List_1_t1689442361;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.TilemapChunk
struct  TilemapChunk_t1836989639  : public MonoBehaviour_t1158329972
{
public:
	// CreativeSpore.SuperTilemapEditor.Tilemap CreativeSpore.SuperTilemapEditor.TilemapChunk::ParentTilemap
	Tilemap_t342945180 * ___ParentTilemap_2;
	// System.Int32 CreativeSpore.SuperTilemapEditor.TilemapChunk::GridPosX
	int32_t ___GridPosX_3;
	// System.Int32 CreativeSpore.SuperTilemapEditor.TilemapChunk::GridPosY
	int32_t ___GridPosY_4;
	// System.Int32 CreativeSpore.SuperTilemapEditor.TilemapChunk::m_width
	int32_t ___m_width_5;
	// System.Int32 CreativeSpore.SuperTilemapEditor.TilemapChunk::m_height
	int32_t ___m_height_6;
	// System.Collections.Generic.List`1<System.UInt32> CreativeSpore.SuperTilemapEditor.TilemapChunk::m_tileDataList
	List_1_t1518803153 * ___m_tileDataList_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> CreativeSpore.SuperTilemapEditor.TilemapChunk::m_uv
	List_1_t1612828711 * ___m_uv_9;
	// System.Collections.Generic.List`1<CreativeSpore.SuperTilemapEditor.TilemapChunk/AnimTileData> CreativeSpore.SuperTilemapEditor.TilemapChunk::m_animatedTiles
	List_1_t644189081 * ___m_animatedTiles_11;
	// UnityEngine.MaterialPropertyBlock CreativeSpore.SuperTilemapEditor.TilemapChunk::m_matPropBlock
	MaterialPropertyBlock_t3303648957 * ___m_matPropBlock_12;
	// UnityEngine.MeshCollider CreativeSpore.SuperTilemapEditor.TilemapChunk::m_meshCollider
	MeshCollider_t2718867283 * ___m_meshCollider_15;
	// System.Boolean CreativeSpore.SuperTilemapEditor.TilemapChunk::m_has2DColliders
	bool ___m_has2DColliders_18;
	// System.Boolean CreativeSpore.SuperTilemapEditor.TilemapChunk::m_needsRebuildColliders
	bool ___m_needsRebuildColliders_19;
	// UnityEngine.MeshFilter CreativeSpore.SuperTilemapEditor.TilemapChunk::m_meshFilter
	MeshFilter_t3026937449 * ___m_meshFilter_24;
	// UnityEngine.MeshRenderer CreativeSpore.SuperTilemapEditor.TilemapChunk::m_meshRenderer
	MeshRenderer_t1268241104 * ___m_meshRenderer_25;
	// System.Boolean CreativeSpore.SuperTilemapEditor.TilemapChunk::m_needsRebuildMesh
	bool ___m_needsRebuildMesh_26;
	// System.Boolean CreativeSpore.SuperTilemapEditor.TilemapChunk::m_invalidateBrushes
	bool ___m_invalidateBrushes_27;
	// System.Collections.Generic.List`1<CreativeSpore.SuperTilemapEditor.TilemapChunk/TileObjData> CreativeSpore.SuperTilemapEditor.TilemapChunk::m_tileObjList
	List_1_t1689442361 * ___m_tileObjList_32;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CreativeSpore.SuperTilemapEditor.TilemapChunk::m_tileObjToBeRemoved
	List_1_t1125654279 * ___m_tileObjToBeRemoved_33;

public:
	inline static int32_t get_offset_of_ParentTilemap_2() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639, ___ParentTilemap_2)); }
	inline Tilemap_t342945180 * get_ParentTilemap_2() const { return ___ParentTilemap_2; }
	inline Tilemap_t342945180 ** get_address_of_ParentTilemap_2() { return &___ParentTilemap_2; }
	inline void set_ParentTilemap_2(Tilemap_t342945180 * value)
	{
		___ParentTilemap_2 = value;
		Il2CppCodeGenWriteBarrier(&___ParentTilemap_2, value);
	}

	inline static int32_t get_offset_of_GridPosX_3() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639, ___GridPosX_3)); }
	inline int32_t get_GridPosX_3() const { return ___GridPosX_3; }
	inline int32_t* get_address_of_GridPosX_3() { return &___GridPosX_3; }
	inline void set_GridPosX_3(int32_t value)
	{
		___GridPosX_3 = value;
	}

	inline static int32_t get_offset_of_GridPosY_4() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639, ___GridPosY_4)); }
	inline int32_t get_GridPosY_4() const { return ___GridPosY_4; }
	inline int32_t* get_address_of_GridPosY_4() { return &___GridPosY_4; }
	inline void set_GridPosY_4(int32_t value)
	{
		___GridPosY_4 = value;
	}

	inline static int32_t get_offset_of_m_width_5() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639, ___m_width_5)); }
	inline int32_t get_m_width_5() const { return ___m_width_5; }
	inline int32_t* get_address_of_m_width_5() { return &___m_width_5; }
	inline void set_m_width_5(int32_t value)
	{
		___m_width_5 = value;
	}

	inline static int32_t get_offset_of_m_height_6() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639, ___m_height_6)); }
	inline int32_t get_m_height_6() const { return ___m_height_6; }
	inline int32_t* get_address_of_m_height_6() { return &___m_height_6; }
	inline void set_m_height_6(int32_t value)
	{
		___m_height_6 = value;
	}

	inline static int32_t get_offset_of_m_tileDataList_7() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639, ___m_tileDataList_7)); }
	inline List_1_t1518803153 * get_m_tileDataList_7() const { return ___m_tileDataList_7; }
	inline List_1_t1518803153 ** get_address_of_m_tileDataList_7() { return &___m_tileDataList_7; }
	inline void set_m_tileDataList_7(List_1_t1518803153 * value)
	{
		___m_tileDataList_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_tileDataList_7, value);
	}

	inline static int32_t get_offset_of_m_uv_9() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639, ___m_uv_9)); }
	inline List_1_t1612828711 * get_m_uv_9() const { return ___m_uv_9; }
	inline List_1_t1612828711 ** get_address_of_m_uv_9() { return &___m_uv_9; }
	inline void set_m_uv_9(List_1_t1612828711 * value)
	{
		___m_uv_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_uv_9, value);
	}

	inline static int32_t get_offset_of_m_animatedTiles_11() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639, ___m_animatedTiles_11)); }
	inline List_1_t644189081 * get_m_animatedTiles_11() const { return ___m_animatedTiles_11; }
	inline List_1_t644189081 ** get_address_of_m_animatedTiles_11() { return &___m_animatedTiles_11; }
	inline void set_m_animatedTiles_11(List_1_t644189081 * value)
	{
		___m_animatedTiles_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_animatedTiles_11, value);
	}

	inline static int32_t get_offset_of_m_matPropBlock_12() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639, ___m_matPropBlock_12)); }
	inline MaterialPropertyBlock_t3303648957 * get_m_matPropBlock_12() const { return ___m_matPropBlock_12; }
	inline MaterialPropertyBlock_t3303648957 ** get_address_of_m_matPropBlock_12() { return &___m_matPropBlock_12; }
	inline void set_m_matPropBlock_12(MaterialPropertyBlock_t3303648957 * value)
	{
		___m_matPropBlock_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_matPropBlock_12, value);
	}

	inline static int32_t get_offset_of_m_meshCollider_15() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639, ___m_meshCollider_15)); }
	inline MeshCollider_t2718867283 * get_m_meshCollider_15() const { return ___m_meshCollider_15; }
	inline MeshCollider_t2718867283 ** get_address_of_m_meshCollider_15() { return &___m_meshCollider_15; }
	inline void set_m_meshCollider_15(MeshCollider_t2718867283 * value)
	{
		___m_meshCollider_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_meshCollider_15, value);
	}

	inline static int32_t get_offset_of_m_has2DColliders_18() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639, ___m_has2DColliders_18)); }
	inline bool get_m_has2DColliders_18() const { return ___m_has2DColliders_18; }
	inline bool* get_address_of_m_has2DColliders_18() { return &___m_has2DColliders_18; }
	inline void set_m_has2DColliders_18(bool value)
	{
		___m_has2DColliders_18 = value;
	}

	inline static int32_t get_offset_of_m_needsRebuildColliders_19() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639, ___m_needsRebuildColliders_19)); }
	inline bool get_m_needsRebuildColliders_19() const { return ___m_needsRebuildColliders_19; }
	inline bool* get_address_of_m_needsRebuildColliders_19() { return &___m_needsRebuildColliders_19; }
	inline void set_m_needsRebuildColliders_19(bool value)
	{
		___m_needsRebuildColliders_19 = value;
	}

	inline static int32_t get_offset_of_m_meshFilter_24() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639, ___m_meshFilter_24)); }
	inline MeshFilter_t3026937449 * get_m_meshFilter_24() const { return ___m_meshFilter_24; }
	inline MeshFilter_t3026937449 ** get_address_of_m_meshFilter_24() { return &___m_meshFilter_24; }
	inline void set_m_meshFilter_24(MeshFilter_t3026937449 * value)
	{
		___m_meshFilter_24 = value;
		Il2CppCodeGenWriteBarrier(&___m_meshFilter_24, value);
	}

	inline static int32_t get_offset_of_m_meshRenderer_25() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639, ___m_meshRenderer_25)); }
	inline MeshRenderer_t1268241104 * get_m_meshRenderer_25() const { return ___m_meshRenderer_25; }
	inline MeshRenderer_t1268241104 ** get_address_of_m_meshRenderer_25() { return &___m_meshRenderer_25; }
	inline void set_m_meshRenderer_25(MeshRenderer_t1268241104 * value)
	{
		___m_meshRenderer_25 = value;
		Il2CppCodeGenWriteBarrier(&___m_meshRenderer_25, value);
	}

	inline static int32_t get_offset_of_m_needsRebuildMesh_26() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639, ___m_needsRebuildMesh_26)); }
	inline bool get_m_needsRebuildMesh_26() const { return ___m_needsRebuildMesh_26; }
	inline bool* get_address_of_m_needsRebuildMesh_26() { return &___m_needsRebuildMesh_26; }
	inline void set_m_needsRebuildMesh_26(bool value)
	{
		___m_needsRebuildMesh_26 = value;
	}

	inline static int32_t get_offset_of_m_invalidateBrushes_27() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639, ___m_invalidateBrushes_27)); }
	inline bool get_m_invalidateBrushes_27() const { return ___m_invalidateBrushes_27; }
	inline bool* get_address_of_m_invalidateBrushes_27() { return &___m_invalidateBrushes_27; }
	inline void set_m_invalidateBrushes_27(bool value)
	{
		___m_invalidateBrushes_27 = value;
	}

	inline static int32_t get_offset_of_m_tileObjList_32() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639, ___m_tileObjList_32)); }
	inline List_1_t1689442361 * get_m_tileObjList_32() const { return ___m_tileObjList_32; }
	inline List_1_t1689442361 ** get_address_of_m_tileObjList_32() { return &___m_tileObjList_32; }
	inline void set_m_tileObjList_32(List_1_t1689442361 * value)
	{
		___m_tileObjList_32 = value;
		Il2CppCodeGenWriteBarrier(&___m_tileObjList_32, value);
	}

	inline static int32_t get_offset_of_m_tileObjToBeRemoved_33() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639, ___m_tileObjToBeRemoved_33)); }
	inline List_1_t1125654279 * get_m_tileObjToBeRemoved_33() const { return ___m_tileObjToBeRemoved_33; }
	inline List_1_t1125654279 ** get_address_of_m_tileObjToBeRemoved_33() { return &___m_tileObjToBeRemoved_33; }
	inline void set_m_tileObjToBeRemoved_33(List_1_t1125654279 * value)
	{
		___m_tileObjToBeRemoved_33 = value;
		Il2CppCodeGenWriteBarrier(&___m_tileObjToBeRemoved_33, value);
	}
};

struct TilemapChunk_t1836989639_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> CreativeSpore.SuperTilemapEditor.TilemapChunk::s_vertices
	List_1_t1612828712 * ___s_vertices_8;
	// System.Collections.Generic.List`1<System.Int32> CreativeSpore.SuperTilemapEditor.TilemapChunk::s_triangles
	List_1_t1440998580 * ___s_triangles_10;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material> CreativeSpore.SuperTilemapEditor.TilemapChunk::s_dicMaterialCopyWithPixelSnap
	Dictionary_2_t3590089903 * ___s_dicMaterialCopyWithPixelSnap_13;
	// System.Boolean CreativeSpore.SuperTilemapEditor.TilemapChunk::s_isOnValidate
	bool ___s_isOnValidate_14;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> CreativeSpore.SuperTilemapEditor.TilemapChunk::s_meshCollVertices
	List_1_t1612828712 * ___s_meshCollVertices_16;
	// System.Collections.Generic.List`1<System.Int32> CreativeSpore.SuperTilemapEditor.TilemapChunk::s_meshCollTriangles
	List_1_t1440998580 * ___s_meshCollTriangles_17;
	// UnityEngine.Vector2[] CreativeSpore.SuperTilemapEditor.TilemapChunk::s_fullCollTileVertices
	Vector2U5BU5D_t686124026* ___s_fullCollTileVertices_20;
	// UnityEngine.Vector2[] CreativeSpore.SuperTilemapEditor.TilemapChunk::s_neighborSegmentMinMax
	Vector2U5BU5D_t686124026* ___s_neighborSegmentMinMax_21;
	// System.Collections.Generic.List`1<System.Collections.Generic.LinkedList`1<UnityEngine.Vector2>> CreativeSpore.SuperTilemapEditor.TilemapChunk::s_openEdges
	List_1_t1917536940 * ___s_openEdges_22;
	// CreativeSpore.SuperTilemapEditor.TileColliderData[] CreativeSpore.SuperTilemapEditor.TilemapChunk::neighborTileCollData
	TileColliderDataU5BU5D_t3462461955* ___neighborTileCollData_23;
	// CreativeSpore.SuperTilemapEditor.TilemapChunk CreativeSpore.SuperTilemapEditor.TilemapChunk::s_currUpdatedTilechunk
	TilemapChunk_t1836989639 * ___s_currUpdatedTilechunk_28;
	// System.Int32 CreativeSpore.SuperTilemapEditor.TilemapChunk::s_currUVVertex
	int32_t ___s_currUVVertex_29;
	// UnityEngine.Vector2[] CreativeSpore.SuperTilemapEditor.TilemapChunk::s_tileUV
	Vector2U5BU5D_t686124026* ___s_tileUV_30;

public:
	inline static int32_t get_offset_of_s_vertices_8() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639_StaticFields, ___s_vertices_8)); }
	inline List_1_t1612828712 * get_s_vertices_8() const { return ___s_vertices_8; }
	inline List_1_t1612828712 ** get_address_of_s_vertices_8() { return &___s_vertices_8; }
	inline void set_s_vertices_8(List_1_t1612828712 * value)
	{
		___s_vertices_8 = value;
		Il2CppCodeGenWriteBarrier(&___s_vertices_8, value);
	}

	inline static int32_t get_offset_of_s_triangles_10() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639_StaticFields, ___s_triangles_10)); }
	inline List_1_t1440998580 * get_s_triangles_10() const { return ___s_triangles_10; }
	inline List_1_t1440998580 ** get_address_of_s_triangles_10() { return &___s_triangles_10; }
	inline void set_s_triangles_10(List_1_t1440998580 * value)
	{
		___s_triangles_10 = value;
		Il2CppCodeGenWriteBarrier(&___s_triangles_10, value);
	}

	inline static int32_t get_offset_of_s_dicMaterialCopyWithPixelSnap_13() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639_StaticFields, ___s_dicMaterialCopyWithPixelSnap_13)); }
	inline Dictionary_2_t3590089903 * get_s_dicMaterialCopyWithPixelSnap_13() const { return ___s_dicMaterialCopyWithPixelSnap_13; }
	inline Dictionary_2_t3590089903 ** get_address_of_s_dicMaterialCopyWithPixelSnap_13() { return &___s_dicMaterialCopyWithPixelSnap_13; }
	inline void set_s_dicMaterialCopyWithPixelSnap_13(Dictionary_2_t3590089903 * value)
	{
		___s_dicMaterialCopyWithPixelSnap_13 = value;
		Il2CppCodeGenWriteBarrier(&___s_dicMaterialCopyWithPixelSnap_13, value);
	}

	inline static int32_t get_offset_of_s_isOnValidate_14() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639_StaticFields, ___s_isOnValidate_14)); }
	inline bool get_s_isOnValidate_14() const { return ___s_isOnValidate_14; }
	inline bool* get_address_of_s_isOnValidate_14() { return &___s_isOnValidate_14; }
	inline void set_s_isOnValidate_14(bool value)
	{
		___s_isOnValidate_14 = value;
	}

	inline static int32_t get_offset_of_s_meshCollVertices_16() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639_StaticFields, ___s_meshCollVertices_16)); }
	inline List_1_t1612828712 * get_s_meshCollVertices_16() const { return ___s_meshCollVertices_16; }
	inline List_1_t1612828712 ** get_address_of_s_meshCollVertices_16() { return &___s_meshCollVertices_16; }
	inline void set_s_meshCollVertices_16(List_1_t1612828712 * value)
	{
		___s_meshCollVertices_16 = value;
		Il2CppCodeGenWriteBarrier(&___s_meshCollVertices_16, value);
	}

	inline static int32_t get_offset_of_s_meshCollTriangles_17() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639_StaticFields, ___s_meshCollTriangles_17)); }
	inline List_1_t1440998580 * get_s_meshCollTriangles_17() const { return ___s_meshCollTriangles_17; }
	inline List_1_t1440998580 ** get_address_of_s_meshCollTriangles_17() { return &___s_meshCollTriangles_17; }
	inline void set_s_meshCollTriangles_17(List_1_t1440998580 * value)
	{
		___s_meshCollTriangles_17 = value;
		Il2CppCodeGenWriteBarrier(&___s_meshCollTriangles_17, value);
	}

	inline static int32_t get_offset_of_s_fullCollTileVertices_20() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639_StaticFields, ___s_fullCollTileVertices_20)); }
	inline Vector2U5BU5D_t686124026* get_s_fullCollTileVertices_20() const { return ___s_fullCollTileVertices_20; }
	inline Vector2U5BU5D_t686124026** get_address_of_s_fullCollTileVertices_20() { return &___s_fullCollTileVertices_20; }
	inline void set_s_fullCollTileVertices_20(Vector2U5BU5D_t686124026* value)
	{
		___s_fullCollTileVertices_20 = value;
		Il2CppCodeGenWriteBarrier(&___s_fullCollTileVertices_20, value);
	}

	inline static int32_t get_offset_of_s_neighborSegmentMinMax_21() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639_StaticFields, ___s_neighborSegmentMinMax_21)); }
	inline Vector2U5BU5D_t686124026* get_s_neighborSegmentMinMax_21() const { return ___s_neighborSegmentMinMax_21; }
	inline Vector2U5BU5D_t686124026** get_address_of_s_neighborSegmentMinMax_21() { return &___s_neighborSegmentMinMax_21; }
	inline void set_s_neighborSegmentMinMax_21(Vector2U5BU5D_t686124026* value)
	{
		___s_neighborSegmentMinMax_21 = value;
		Il2CppCodeGenWriteBarrier(&___s_neighborSegmentMinMax_21, value);
	}

	inline static int32_t get_offset_of_s_openEdges_22() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639_StaticFields, ___s_openEdges_22)); }
	inline List_1_t1917536940 * get_s_openEdges_22() const { return ___s_openEdges_22; }
	inline List_1_t1917536940 ** get_address_of_s_openEdges_22() { return &___s_openEdges_22; }
	inline void set_s_openEdges_22(List_1_t1917536940 * value)
	{
		___s_openEdges_22 = value;
		Il2CppCodeGenWriteBarrier(&___s_openEdges_22, value);
	}

	inline static int32_t get_offset_of_neighborTileCollData_23() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639_StaticFields, ___neighborTileCollData_23)); }
	inline TileColliderDataU5BU5D_t3462461955* get_neighborTileCollData_23() const { return ___neighborTileCollData_23; }
	inline TileColliderDataU5BU5D_t3462461955** get_address_of_neighborTileCollData_23() { return &___neighborTileCollData_23; }
	inline void set_neighborTileCollData_23(TileColliderDataU5BU5D_t3462461955* value)
	{
		___neighborTileCollData_23 = value;
		Il2CppCodeGenWriteBarrier(&___neighborTileCollData_23, value);
	}

	inline static int32_t get_offset_of_s_currUpdatedTilechunk_28() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639_StaticFields, ___s_currUpdatedTilechunk_28)); }
	inline TilemapChunk_t1836989639 * get_s_currUpdatedTilechunk_28() const { return ___s_currUpdatedTilechunk_28; }
	inline TilemapChunk_t1836989639 ** get_address_of_s_currUpdatedTilechunk_28() { return &___s_currUpdatedTilechunk_28; }
	inline void set_s_currUpdatedTilechunk_28(TilemapChunk_t1836989639 * value)
	{
		___s_currUpdatedTilechunk_28 = value;
		Il2CppCodeGenWriteBarrier(&___s_currUpdatedTilechunk_28, value);
	}

	inline static int32_t get_offset_of_s_currUVVertex_29() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639_StaticFields, ___s_currUVVertex_29)); }
	inline int32_t get_s_currUVVertex_29() const { return ___s_currUVVertex_29; }
	inline int32_t* get_address_of_s_currUVVertex_29() { return &___s_currUVVertex_29; }
	inline void set_s_currUVVertex_29(int32_t value)
	{
		___s_currUVVertex_29 = value;
	}

	inline static int32_t get_offset_of_s_tileUV_30() { return static_cast<int32_t>(offsetof(TilemapChunk_t1836989639_StaticFields, ___s_tileUV_30)); }
	inline Vector2U5BU5D_t686124026* get_s_tileUV_30() const { return ___s_tileUV_30; }
	inline Vector2U5BU5D_t686124026** get_address_of_s_tileUV_30() { return &___s_tileUV_30; }
	inline void set_s_tileUV_30(Vector2U5BU5D_t686124026* value)
	{
		___s_tileUV_30 = value;
		Il2CppCodeGenWriteBarrier(&___s_tileUV_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
