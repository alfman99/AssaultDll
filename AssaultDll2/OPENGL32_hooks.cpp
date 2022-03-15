#include "pch.h"
#include "Cheat.hpp"

bool HackBase::Options::MenuOpen = true;

// Main loop for menu
BOOL __stdcall Hook::Detour::h_wglSwapBuffers(HDC hDC) {

	Interface::Render();

	return Hook::Original::o_wglSwapBuffers(hDC);

}