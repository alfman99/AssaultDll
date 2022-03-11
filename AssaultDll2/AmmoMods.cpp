#include "pch.h"
#include "Cheat.hpp"

std::vector<BYTE> OriginalBytesAmmo = { 0x8b, 0x46, 0x14, 0xff, 0x08 };

void Hacks::Weapon::EnableInfiniteAmmo() {
	
	DWORD currentProtection;
	VirtualProtect((LPVOID)Offsets::Hacks::DecreaseAmmo, 5, PAGE_EXECUTE_READWRITE, &currentProtection);

	for (int i = 0; i < 5; i++) {
		*(BYTE*)(Offsets::Hacks::DecreaseAmmo + i) = 0x90;
	}

	VirtualProtect((LPVOID)Offsets::Hacks::DecreaseAmmo, 5, currentProtection, &currentProtection);

}


void Hacks::Weapon::DisableInfiniteAmmo() {

	DWORD currentProtection;
	VirtualProtect((LPVOID)Offsets::Hacks::DecreaseAmmo, 5, PAGE_EXECUTE_READWRITE, &currentProtection);

	for (int i = 0; i < OriginalBytesAmmo.size(); i++) {
		*(BYTE*)(Offsets::Hacks::DecreaseAmmo + i) = OriginalBytesAmmo[i];
	}

	VirtualProtect((LPVOID)Offsets::Hacks::DecreaseAmmo, 5, currentProtection, &currentProtection);

}