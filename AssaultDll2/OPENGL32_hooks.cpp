#include "pch.h"
#include "Cheat.hpp"


int test = 0;
bool HackBase::Options::MenuOpen = true;

BOOL __stdcall Hook::Detour::h_wglSwapBuffers(HDC hDC) {

	if (!HackBase::Options::MenuOpen) {
		return Hook::Original::o_wglSwapBuffers(hDC);
	}


	if (test % 60 == 0) {
		Logger::Info("OPENGL hook working! :)");
	}

	test++;

	return Hook::Original::o_wglSwapBuffers(hDC);

}