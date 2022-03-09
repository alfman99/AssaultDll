#include "pch.h"
#include "Cheat.hpp"


void HackBase::Inject() {

	Logger::Initialize();
	Hook::Initialize();

}


void HackBase::Deject() {

	Logger::Terminate();
	Hook::Terminate();

	// wait 2000ms
	std::this_thread::sleep_for(std::chrono::milliseconds(2000));

}