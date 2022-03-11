#include "pch.h"
#include "Cheat.hpp"


int test = 0;
bool HackBase::Options::MenuOpen = true;

// Main loop for menu
BOOL __stdcall Hook::Detour::h_wglSwapBuffers(HDC hDC) {

	if (!HackBase::Options::MenuOpen) {
		return Hook::Original::o_wglSwapBuffers(hDC);
	}

	glBegin(GL_LINES);
	glVertex2f(200, 200);
	glVertex2f(400, 400);
	glEnd();


	return Hook::Original::o_wglSwapBuffers(hDC);

}