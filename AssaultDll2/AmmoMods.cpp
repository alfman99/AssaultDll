#include "pch.h"
#include "Cheat.hpp"

std::vector<BYTE> OriginalBytesAmmo = { 0x8b, 0x46, 0x14, 0xff, 0x08 };

void Hacks::Weapon::EnableInfiniteAmmo() {
	Util::NopBytes(Offsets::Hacks::DecreaseAmmo, OriginalBytesAmmo.size());
}


void Hacks::Weapon::DisableInfiniteAmmo() {
	Util::PatchBytes(Offsets::Hacks::DecreaseAmmo, OriginalBytesAmmo);
}