#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreativeSpore.SuperTilemapEditor.RandomBrush/RandomTileData
struct  RandomTileData_t1426636131  : public Il2CppObject
{
public:
	// System.UInt32 CreativeSpore.SuperTilemapEditor.RandomBrush/RandomTileData::tileData
	uint32_t ___tileData_0;
	// System.Single CreativeSpore.SuperTilemapEditor.RandomBrush/RandomTileData::probabilityFactor
	float ___probabilityFactor_1;

public:
	inline static int32_t get_offset_of_tileData_0() { return static_cast<int32_t>(offsetof(RandomTileData_t1426636131, ___tileData_0)); }
	inline uint32_t get_tileData_0() const { return ___tileData_0; }
	inline uint32_t* get_address_of_tileData_0() { return &___tileData_0; }
	inline void set_tileData_0(uint32_t value)
	{
		___tileData_0 = value;
	}

	inline static int32_t get_offset_of_probabilityFactor_1() { return static_cast<int32_t>(offsetof(RandomTileData_t1426636131, ___probabilityFactor_1)); }
	inline float get_probabilityFactor_1() const { return ___probabilityFactor_1; }
	inline float* get_address_of_probabilityFactor_1() { return &___probabilityFactor_1; }
	inline void set_probabilityFactor_1(float value)
	{
		___probabilityFactor_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
