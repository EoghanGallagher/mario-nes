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
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t3303648957;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.TileObjMesh
struct  TileObjMesh_t1737339538  : public MonoBehaviour_t1158329972
{
public:
	// CreativeSpore.SuperTilemapEditor.Tilemap CreativeSpore.SuperTilemapEditor.TileObjMesh::m_parentTilemap
	Tilemap_t342945180 * ___m_parentTilemap_2;
	// UnityEngine.MeshRenderer CreativeSpore.SuperTilemapEditor.TileObjMesh::m_meshRenderer
	MeshRenderer_t1268241104 * ___m_meshRenderer_3;
	// UnityEngine.MeshFilter CreativeSpore.SuperTilemapEditor.TileObjMesh::m_meshFilter
	MeshFilter_t3026937449 * ___m_meshFilter_4;
	// UnityEngine.MaterialPropertyBlock CreativeSpore.SuperTilemapEditor.TileObjMesh::m_matPropBlock
	MaterialPropertyBlock_t3303648957 * ___m_matPropBlock_5;

public:
	inline static int32_t get_offset_of_m_parentTilemap_2() { return static_cast<int32_t>(offsetof(TileObjMesh_t1737339538, ___m_parentTilemap_2)); }
	inline Tilemap_t342945180 * get_m_parentTilemap_2() const { return ___m_parentTilemap_2; }
	inline Tilemap_t342945180 ** get_address_of_m_parentTilemap_2() { return &___m_parentTilemap_2; }
	inline void set_m_parentTilemap_2(Tilemap_t342945180 * value)
	{
		___m_parentTilemap_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_parentTilemap_2, value);
	}

	inline static int32_t get_offset_of_m_meshRenderer_3() { return static_cast<int32_t>(offsetof(TileObjMesh_t1737339538, ___m_meshRenderer_3)); }
	inline MeshRenderer_t1268241104 * get_m_meshRenderer_3() const { return ___m_meshRenderer_3; }
	inline MeshRenderer_t1268241104 ** get_address_of_m_meshRenderer_3() { return &___m_meshRenderer_3; }
	inline void set_m_meshRenderer_3(MeshRenderer_t1268241104 * value)
	{
		___m_meshRenderer_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_meshRenderer_3, value);
	}

	inline static int32_t get_offset_of_m_meshFilter_4() { return static_cast<int32_t>(offsetof(TileObjMesh_t1737339538, ___m_meshFilter_4)); }
	inline MeshFilter_t3026937449 * get_m_meshFilter_4() const { return ___m_meshFilter_4; }
	inline MeshFilter_t3026937449 ** get_address_of_m_meshFilter_4() { return &___m_meshFilter_4; }
	inline void set_m_meshFilter_4(MeshFilter_t3026937449 * value)
	{
		___m_meshFilter_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_meshFilter_4, value);
	}

	inline static int32_t get_offset_of_m_matPropBlock_5() { return static_cast<int32_t>(offsetof(TileObjMesh_t1737339538, ___m_matPropBlock_5)); }
	inline MaterialPropertyBlock_t3303648957 * get_m_matPropBlock_5() const { return ___m_matPropBlock_5; }
	inline MaterialPropertyBlock_t3303648957 ** get_address_of_m_matPropBlock_5() { return &___m_matPropBlock_5; }
	inline void set_m_matPropBlock_5(MaterialPropertyBlock_t3303648957 * value)
	{
		___m_matPropBlock_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_matPropBlock_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
