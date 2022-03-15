#include "pch.h"
#include "Cheat.hpp"

void HackBase::Inject() {

	// Order is important!
	Logger::Initialize();
	Interface::Initialize();
	GameFunction::Initialize();
	Hook::Initialize();

	Hacks::Weapon::EnableInfiniteAmmo();

}


void HackBase::Deject() {
		
	// Order is important!
	Hook::Terminate();
	Interface::Terminate();
	Hacks::DisableAll();

	Logger::Info("Closing...");
	std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // wait so you can read message
	Logger::Terminate();

}