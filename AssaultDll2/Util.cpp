#include "pch.h"
#include "Cheat.hpp"

void Util::NopBytes(const DWORD address, const int count) {
	DWORD currentProtection;
	VirtualProtect((LPVOID)address, count, PAGE_EXECUTE_READWRITE, &currentProtection);

	for (int i = 0; i < count; i++) {
		*(BYTE*)(address + i) = 0x90;
	}

	VirtualProtect((LPVOID)address, count, currentProtection, &currentProtection);
}

void Util::PatchBytes(DWORD address, const std::vector<BYTE>& bytes) {
	DWORD currentProtection;
	VirtualProtect((LPVOID)address, bytes.size(), PAGE_EXECUTE_READWRITE, &currentProtection);

	for (int i = 0; i < bytes.size(); i++) {
		*(BYTE*)(address + i) = bytes[i];
	}

	VirtualProtect((LPVOID)address, bytes.size(), currentProtection, &currentProtection);
}