#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// CreativeSpore.SuperTilemapEditor.Tileset/OnTileSelectedDelegate
struct OnTileSelectedDelegate_t3764994906;
// CreativeSpore.SuperTilemapEditor.Tileset/OnTileSelectionChangedDelegate
struct OnTileSelectionChangedDelegate_t2651034575;
// CreativeSpore.SuperTilemapEditor.Tileset/OnBrushSelectedDelegate
struct OnBrushSelectedDelegate_t4042186670;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.Generic.List`1<CreativeSpore.SuperTilemapEditor.TileView>
struct List_1_t444907037;
// System.Collections.Generic.List`1<CreativeSpore.SuperTilemapEditor.Tileset/BrushContainer>
struct List_1_t1772407042;
// System.Collections.Generic.List`1<CreativeSpore.SuperTilemapEditor.Tile>
struct List_1_t820456754;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// CreativeSpore.SuperTilemapEditor.TileSelection
struct TileSelection_t4182896876;
// System.Collections.Generic.Dictionary`2<System.Int32,CreativeSpore.SuperTilemapEditor.TilesetBrush>
struct Dictionary_2_t3742100705;
// System.Comparison`1<CreativeSpore.SuperTilemapEditor.TileView>
struct Comparison_1_t2337524756;
// System.Func`2<System.Int32,System.String>
struct Func_2_t1581040626;
// System.Func`2<System.Int32,System.UInt32>
struct Func_2_t1701502414;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.Tileset
struct  Tileset_t2366016026  : public ScriptableObject_t1975622470
{
public:
	// CreativeSpore.SuperTilemapEditor.Tileset/OnTileSelectedDelegate CreativeSpore.SuperTilemapEditor.Tileset::OnTileSelected
	OnTileSelectedDelegate_t3764994906 * ___OnTileSelected_12;
	// CreativeSpore.SuperTilemapEditor.Tileset/OnTileSelectionChangedDelegate CreativeSpore.SuperTilemapEditor.Tileset::OnTileSelectionChanged
	OnTileSelectionChangedDelegate_t2651034575 * ___OnTileSelectionChanged_13;
	// CreativeSpore.SuperTilemapEditor.Tileset/OnBrushSelectedDelegate CreativeSpore.SuperTilemapEditor.Tileset::OnBrushSelected
	OnBrushSelectedDelegate_t4042186670 * ___OnBrushSelected_14;
	// UnityEngine.Texture2D CreativeSpore.SuperTilemapEditor.Tileset::AtlasTexture
	Texture2D_t3542995729 * ___AtlasTexture_15;
	// UnityEngine.Vector2 CreativeSpore.SuperTilemapEditor.Tileset::TilePxSize
	Vector2_t2243707579  ___TilePxSize_16;
	// UnityEngine.Vector2 CreativeSpore.SuperTilemapEditor.Tileset::SliceOffset
	Vector2_t2243707579  ___SliceOffset_17;
	// UnityEngine.Vector2 CreativeSpore.SuperTilemapEditor.Tileset::SlicePadding
	Vector2_t2243707579  ___SlicePadding_18;
	// UnityEngine.Color CreativeSpore.SuperTilemapEditor.Tileset::BackgroundColor
	Color_t2020392075  ___BackgroundColor_19;
	// UnityEngine.Vector2 CreativeSpore.SuperTilemapEditor.Tileset::VisualTileSize
	Vector2_t2243707579  ___VisualTileSize_20;
	// System.Int32 CreativeSpore.SuperTilemapEditor.Tileset::VisualTilePadding
	int32_t ___VisualTilePadding_21;
	// System.Int32 CreativeSpore.SuperTilemapEditor.Tileset::TileRowLength
	int32_t ___TileRowLength_22;
	// System.Collections.Generic.List`1<CreativeSpore.SuperTilemapEditor.TileView> CreativeSpore.SuperTilemapEditor.Tileset::m_tileViews
	List_1_t444907037 * ___m_tileViews_23;
	// System.Int32 CreativeSpore.SuperTilemapEditor.Tileset::m_tilesetWidth
	int32_t ___m_tilesetWidth_24;
	// System.Int32 CreativeSpore.SuperTilemapEditor.Tileset::m_tilesetHeight
	int32_t ___m_tilesetHeight_25;
	// System.Collections.Generic.List`1<CreativeSpore.SuperTilemapEditor.Tileset/BrushContainer> CreativeSpore.SuperTilemapEditor.Tileset::m_brushes
	List_1_t1772407042 * ___m_brushes_26;
	// System.Collections.Generic.List`1<CreativeSpore.SuperTilemapEditor.Tile> CreativeSpore.SuperTilemapEditor.Tileset::m_tiles
	List_1_t820456754 * ___m_tiles_27;
	// System.Single CreativeSpore.SuperTilemapEditor.Tileset::m_pixelsPerUnit
	float ___m_pixelsPerUnit_28;
	// System.String[] CreativeSpore.SuperTilemapEditor.Tileset::m_brushGroupNames
	StringU5BU5D_t1642385972* ___m_brushGroupNames_29;
	// System.UInt32[] CreativeSpore.SuperTilemapEditor.Tileset::m_brushGroupAutotilingMatrix
	UInt32U5BU5D_t59386216* ___m_brushGroupAutotilingMatrix_30;
	// System.String[] CreativeSpore.SuperTilemapEditor.Tileset::m_brushTypeMaskOptions
	StringU5BU5D_t1642385972* ___m_brushTypeMaskOptions_31;
	// System.Int32 CreativeSpore.SuperTilemapEditor.Tileset::m_brushTypeMask
	int32_t ___m_brushTypeMask_32;
	// System.Int32 CreativeSpore.SuperTilemapEditor.Tileset::m_selectedTileId
	int32_t ___m_selectedTileId_33;
	// System.Int32 CreativeSpore.SuperTilemapEditor.Tileset::m_selectedBrushId
	int32_t ___m_selectedBrushId_34;
	// CreativeSpore.SuperTilemapEditor.TileSelection CreativeSpore.SuperTilemapEditor.Tileset::m_tileSelection
	TileSelection_t4182896876 * ___m_tileSelection_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,CreativeSpore.SuperTilemapEditor.TilesetBrush> CreativeSpore.SuperTilemapEditor.Tileset::m_brushCache
	Dictionary_2_t3742100705 * ___m_brushCache_36;

public:
	inline static int32_t get_offset_of_OnTileSelected_12() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___OnTileSelected_12)); }
	inline OnTileSelectedDelegate_t3764994906 * get_OnTileSelected_12() const { return ___OnTileSelected_12; }
	inline OnTileSelectedDelegate_t3764994906 ** get_address_of_OnTileSelected_12() { return &___OnTileSelected_12; }
	inline void set_OnTileSelected_12(OnTileSelectedDelegate_t3764994906 * value)
	{
		___OnTileSelected_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnTileSelected_12, value);
	}

	inline static int32_t get_offset_of_OnTileSelectionChanged_13() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___OnTileSelectionChanged_13)); }
	inline OnTileSelectionChangedDelegate_t2651034575 * get_OnTileSelectionChanged_13() const { return ___OnTileSelectionChanged_13; }
	inline OnTileSelectionChangedDelegate_t2651034575 ** get_address_of_OnTileSelectionChanged_13() { return &___OnTileSelectionChanged_13; }
	inline void set_OnTileSelectionChanged_13(OnTileSelectionChangedDelegate_t2651034575 * value)
	{
		___OnTileSelectionChanged_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnTileSelectionChanged_13, value);
	}

	inline static int32_t get_offset_of_OnBrushSelected_14() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___OnBrushSelected_14)); }
	inline OnBrushSelectedDelegate_t4042186670 * get_OnBrushSelected_14() const { return ___OnBrushSelected_14; }
	inline OnBrushSelectedDelegate_t4042186670 ** get_address_of_OnBrushSelected_14() { return &___OnBrushSelected_14; }
	inline void set_OnBrushSelected_14(OnBrushSelectedDelegate_t4042186670 * value)
	{
		___OnBrushSelected_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnBrushSelected_14, value);
	}

	inline static int32_t get_offset_of_AtlasTexture_15() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___AtlasTexture_15)); }
	inline Texture2D_t3542995729 * get_AtlasTexture_15() const { return ___AtlasTexture_15; }
	inline Texture2D_t3542995729 ** get_address_of_AtlasTexture_15() { return &___AtlasTexture_15; }
	inline void set_AtlasTexture_15(Texture2D_t3542995729 * value)
	{
		___AtlasTexture_15 = value;
		Il2CppCodeGenWriteBarrier(&___AtlasTexture_15, value);
	}

	inline static int32_t get_offset_of_TilePxSize_16() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___TilePxSize_16)); }
	inline Vector2_t2243707579  get_TilePxSize_16() const { return ___TilePxSize_16; }
	inline Vector2_t2243707579 * get_address_of_TilePxSize_16() { return &___TilePxSize_16; }
	inline void set_TilePxSize_16(Vector2_t2243707579  value)
	{
		___TilePxSize_16 = value;
	}

	inline static int32_t get_offset_of_SliceOffset_17() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___SliceOffset_17)); }
	inline Vector2_t2243707579  get_SliceOffset_17() const { return ___SliceOffset_17; }
	inline Vector2_t2243707579 * get_address_of_SliceOffset_17() { return &___SliceOffset_17; }
	inline void set_SliceOffset_17(Vector2_t2243707579  value)
	{
		___SliceOffset_17 = value;
	}

	inline static int32_t get_offset_of_SlicePadding_18() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___SlicePadding_18)); }
	inline Vector2_t2243707579  get_SlicePadding_18() const { return ___SlicePadding_18; }
	inline Vector2_t2243707579 * get_address_of_SlicePadding_18() { return &___SlicePadding_18; }
	inline void set_SlicePadding_18(Vector2_t2243707579  value)
	{
		___SlicePadding_18 = value;
	}

	inline static int32_t get_offset_of_BackgroundColor_19() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___BackgroundColor_19)); }
	inline Color_t2020392075  get_BackgroundColor_19() const { return ___BackgroundColor_19; }
	inline Color_t2020392075 * get_address_of_BackgroundColor_19() { return &___BackgroundColor_19; }
	inline void set_BackgroundColor_19(Color_t2020392075  value)
	{
		___BackgroundColor_19 = value;
	}

	inline static int32_t get_offset_of_VisualTileSize_20() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___VisualTileSize_20)); }
	inline Vector2_t2243707579  get_VisualTileSize_20() const { return ___VisualTileSize_20; }
	inline Vector2_t2243707579 * get_address_of_VisualTileSize_20() { return &___VisualTileSize_20; }
	inline void set_VisualTileSize_20(Vector2_t2243707579  value)
	{
		___VisualTileSize_20 = value;
	}

	inline static int32_t get_offset_of_VisualTilePadding_21() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___VisualTilePadding_21)); }
	inline int32_t get_VisualTilePadding_21() const { return ___VisualTilePadding_21; }
	inline int32_t* get_address_of_VisualTilePadding_21() { return &___VisualTilePadding_21; }
	inline void set_VisualTilePadding_21(int32_t value)
	{
		___VisualTilePadding_21 = value;
	}

	inline static int32_t get_offset_of_TileRowLength_22() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___TileRowLength_22)); }
	inline int32_t get_TileRowLength_22() const { return ___TileRowLength_22; }
	inline int32_t* get_address_of_TileRowLength_22() { return &___TileRowLength_22; }
	inline void set_TileRowLength_22(int32_t value)
	{
		___TileRowLength_22 = value;
	}

	inline static int32_t get_offset_of_m_tileViews_23() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___m_tileViews_23)); }
	inline List_1_t444907037 * get_m_tileViews_23() const { return ___m_tileViews_23; }
	inline List_1_t444907037 ** get_address_of_m_tileViews_23() { return &___m_tileViews_23; }
	inline void set_m_tileViews_23(List_1_t444907037 * value)
	{
		___m_tileViews_23 = value;
		Il2CppCodeGenWriteBarrier(&___m_tileViews_23, value);
	}

	inline static int32_t get_offset_of_m_tilesetWidth_24() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___m_tilesetWidth_24)); }
	inline int32_t get_m_tilesetWidth_24() const { return ___m_tilesetWidth_24; }
	inline int32_t* get_address_of_m_tilesetWidth_24() { return &___m_tilesetWidth_24; }
	inline void set_m_tilesetWidth_24(int32_t value)
	{
		___m_tilesetWidth_24 = value;
	}

	inline static int32_t get_offset_of_m_tilesetHeight_25() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___m_tilesetHeight_25)); }
	inline int32_t get_m_tilesetHeight_25() const { return ___m_tilesetHeight_25; }
	inline int32_t* get_address_of_m_tilesetHeight_25() { return &___m_tilesetHeight_25; }
	inline void set_m_tilesetHeight_25(int32_t value)
	{
		___m_tilesetHeight_25 = value;
	}

	inline static int32_t get_offset_of_m_brushes_26() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___m_brushes_26)); }
	inline List_1_t1772407042 * get_m_brushes_26() const { return ___m_brushes_26; }
	inline List_1_t1772407042 ** get_address_of_m_brushes_26() { return &___m_brushes_26; }
	inline void set_m_brushes_26(List_1_t1772407042 * value)
	{
		___m_brushes_26 = value;
		Il2CppCodeGenWriteBarrier(&___m_brushes_26, value);
	}

	inline static int32_t get_offset_of_m_tiles_27() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___m_tiles_27)); }
	inline List_1_t820456754 * get_m_tiles_27() const { return ___m_tiles_27; }
	inline List_1_t820456754 ** get_address_of_m_tiles_27() { return &___m_tiles_27; }
	inline void set_m_tiles_27(List_1_t820456754 * value)
	{
		___m_tiles_27 = value;
		Il2CppCodeGenWriteBarrier(&___m_tiles_27, value);
	}

	inline static int32_t get_offset_of_m_pixelsPerUnit_28() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___m_pixelsPerUnit_28)); }
	inline float get_m_pixelsPerUnit_28() const { return ___m_pixelsPerUnit_28; }
	inline float* get_address_of_m_pixelsPerUnit_28() { return &___m_pixelsPerUnit_28; }
	inline void set_m_pixelsPerUnit_28(float value)
	{
		___m_pixelsPerUnit_28 = value;
	}

	inline static int32_t get_offset_of_m_brushGroupNames_29() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___m_brushGroupNames_29)); }
	inline StringU5BU5D_t1642385972* get_m_brushGroupNames_29() const { return ___m_brushGroupNames_29; }
	inline StringU5BU5D_t1642385972** get_address_of_m_brushGroupNames_29() { return &___m_brushGroupNames_29; }
	inline void set_m_brushGroupNames_29(StringU5BU5D_t1642385972* value)
	{
		___m_brushGroupNames_29 = value;
		Il2CppCodeGenWriteBarrier(&___m_brushGroupNames_29, value);
	}

	inline static int32_t get_offset_of_m_brushGroupAutotilingMatrix_30() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___m_brushGroupAutotilingMatrix_30)); }
	inline UInt32U5BU5D_t59386216* get_m_brushGroupAutotilingMatrix_30() const { return ___m_brushGroupAutotilingMatrix_30; }
	inline UInt32U5BU5D_t59386216** get_address_of_m_brushGroupAutotilingMatrix_30() { return &___m_brushGroupAutotilingMatrix_30; }
	inline void set_m_brushGroupAutotilingMatrix_30(UInt32U5BU5D_t59386216* value)
	{
		___m_brushGroupAutotilingMatrix_30 = value;
		Il2CppCodeGenWriteBarrier(&___m_brushGroupAutotilingMatrix_30, value);
	}

	inline static int32_t get_offset_of_m_brushTypeMaskOptions_31() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___m_brushTypeMaskOptions_31)); }
	inline StringU5BU5D_t1642385972* get_m_brushTypeMaskOptions_31() const { return ___m_brushTypeMaskOptions_31; }
	inline StringU5BU5D_t1642385972** get_address_of_m_brushTypeMaskOptions_31() { return &___m_brushTypeMaskOptions_31; }
	inline void set_m_brushTypeMaskOptions_31(StringU5BU5D_t1642385972* value)
	{
		___m_brushTypeMaskOptions_31 = value;
		Il2CppCodeGenWriteBarrier(&___m_brushTypeMaskOptions_31, value);
	}

	inline static int32_t get_offset_of_m_brushTypeMask_32() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___m_brushTypeMask_32)); }
	inline int32_t get_m_brushTypeMask_32() const { return ___m_brushTypeMask_32; }
	inline int32_t* get_address_of_m_brushTypeMask_32() { return &___m_brushTypeMask_32; }
	inline void set_m_brushTypeMask_32(int32_t value)
	{
		___m_brushTypeMask_32 = value;
	}

	inline static int32_t get_offset_of_m_selectedTileId_33() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___m_selectedTileId_33)); }
	inline int32_t get_m_selectedTileId_33() const { return ___m_selectedTileId_33; }
	inline int32_t* get_address_of_m_selectedTileId_33() { return &___m_selectedTileId_33; }
	inline void set_m_selectedTileId_33(int32_t value)
	{
		___m_selectedTileId_33 = value;
	}

	inline static int32_t get_offset_of_m_selectedBrushId_34() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___m_selectedBrushId_34)); }
	inline int32_t get_m_selectedBrushId_34() const { return ___m_selectedBrushId_34; }
	inline int32_t* get_address_of_m_selectedBrushId_34() { return &___m_selectedBrushId_34; }
	inline void set_m_selectedBrushId_34(int32_t value)
	{
		___m_selectedBrushId_34 = value;
	}

	inline static int32_t get_offset_of_m_tileSelection_35() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___m_tileSelection_35)); }
	inline TileSelection_t4182896876 * get_m_tileSelection_35() const { return ___m_tileSelection_35; }
	inline TileSelection_t4182896876 ** get_address_of_m_tileSelection_35() { return &___m_tileSelection_35; }
	inline void set_m_tileSelection_35(TileSelection_t4182896876 * value)
	{
		___m_tileSelection_35 = value;
		Il2CppCodeGenWriteBarrier(&___m_tileSelection_35, value);
	}

	inline static int32_t get_offset_of_m_brushCache_36() { return static_cast<int32_t>(offsetof(Tileset_t2366016026, ___m_brushCache_36)); }
	inline Dictionary_2_t3742100705 * get_m_brushCache_36() const { return ___m_brushCache_36; }
	inline Dictionary_2_t3742100705 ** get_address_of_m_brushCache_36() { return &___m_brushCache_36; }
	inline void set_m_brushCache_36(Dictionary_2_t3742100705 * value)
	{
		___m_brushCache_36 = value;
		Il2CppCodeGenWriteBarrier(&___m_brushCache_36, value);
	}
};

struct Tileset_t2366016026_StaticFields
{
public:
	// System.Comparison`1<CreativeSpore.SuperTilemapEditor.TileView> CreativeSpore.SuperTilemapEditor.Tileset::<>f__am$cache0
	Comparison_1_t2337524756 * ___U3CU3Ef__amU24cache0_37;
	// System.Func`2<System.Int32,System.String> CreativeSpore.SuperTilemapEditor.Tileset::<>f__am$cache1
	Func_2_t1581040626 * ___U3CU3Ef__amU24cache1_38;
	// System.Func`2<System.Int32,System.UInt32> CreativeSpore.SuperTilemapEditor.Tileset::<>f__am$cache2
	Func_2_t1701502414 * ___U3CU3Ef__amU24cache2_39;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_37() { return static_cast<int32_t>(offsetof(Tileset_t2366016026_StaticFields, ___U3CU3Ef__amU24cache0_37)); }
	inline Comparison_1_t2337524756 * get_U3CU3Ef__amU24cache0_37() const { return ___U3CU3Ef__amU24cache0_37; }
	inline Comparison_1_t2337524756 ** get_address_of_U3CU3Ef__amU24cache0_37() { return &___U3CU3Ef__amU24cache0_37; }
	inline void set_U3CU3Ef__amU24cache0_37(Comparison_1_t2337524756 * value)
	{
		___U3CU3Ef__amU24cache0_37 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_37, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_38() { return static_cast<int32_t>(offsetof(Tileset_t2366016026_StaticFields, ___U3CU3Ef__amU24cache1_38)); }
	inline Func_2_t1581040626 * get_U3CU3Ef__amU24cache1_38() const { return ___U3CU3Ef__amU24cache1_38; }
	inline Func_2_t1581040626 ** get_address_of_U3CU3Ef__amU24cache1_38() { return &___U3CU3Ef__amU24cache1_38; }
	inline void set_U3CU3Ef__amU24cache1_38(Func_2_t1581040626 * value)
	{
		___U3CU3Ef__amU24cache1_38 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_38, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_39() { return static_cast<int32_t>(offsetof(Tileset_t2366016026_StaticFields, ___U3CU3Ef__amU24cache2_39)); }
	inline Func_2_t1701502414 * get_U3CU3Ef__amU24cache2_39() const { return ___U3CU3Ef__amU24cache2_39; }
	inline Func_2_t1701502414 ** get_address_of_U3CU3Ef__amU24cache2_39() { return &___U3CU3Ef__amU24cache2_39; }
	inline void set_U3CU3Ef__amU24cache2_39(Func_2_t1701502414 * value)
	{
		___U3CU3Ef__amU24cache2_39 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_39, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
