#include "pch.h"
#include "Cheat.hpp"

void Interface::Initialize() {
	// gotta do something here, ditched imgui :(
}

void Interface::Render() {

	if (GetAsyncKeyState(VK_NUMPAD0)) {
		HackBase::Options::MenuOpen = !HackBase::Options::MenuOpen;
	}

	if (!HackBase::Options::MenuOpen) {
		return;
	}


	glBegin(GL_LINES);
	glVertex2f(200, 200);
	glVertex2f(400, 400);
	glEnd();

}

void Interface::Terminate() {

}