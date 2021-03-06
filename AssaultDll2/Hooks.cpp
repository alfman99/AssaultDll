#include "pch.h"
#include <MinHook.h>
#include "Cheat.hpp"


Hook::Header::i_wglSwapBuffers Hook::Original::o_wglSwapBuffers = nullptr;


void Hook::Initialize() {
	MH_Initialize();
	
	// OPENGL32.dll - wglSwapBuffers
	MH_CreateHookApi(L"OPENGL32.dll", "wglSwapBuffers", &Hook::Detour::h_wglSwapBuffers, reinterpret_cast<void**>(&Hook::Original::o_wglSwapBuffers));

	MH_EnableHook(MH_ALL_HOOKS);

	Logger::Info("Hooks set and enabled");
}

void Hook::Terminate() {

	MH_DisableHook(MH_ALL_HOOKS);
	MH_RemoveHook(MH_ALL_HOOKS);
	MH_Uninitialize();

	Logger::Info("Hooks removed");
}