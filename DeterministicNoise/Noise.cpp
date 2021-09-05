#include "pch.h"
#include "Noise.h"

double Noise::GetNoise(int32_t position, uint32_t seed)
{
	constexpr uint32_t BIT_NOISE1 = 0xB5297A4D;
	constexpr uint32_t BIT_NOISE2 = 0x68E31DA4;
	constexpr uint32_t BIT_NOISE3 = 0x1B56C4E9;

	uint32_t mangled = position;
	mangled *= BIT_NOISE1;
	mangled += seed;
	mangled ^= (mangled >> 8);
	mangled += BIT_NOISE2;
	mangled ^= (mangled >> 8);
	mangled += BIT_NOISE3;
	mangled ^= (mangled >> 8);
	return mangled;
}
