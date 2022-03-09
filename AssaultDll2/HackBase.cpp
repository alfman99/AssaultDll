#include "pch.h"
#include "Cheat.hpp"


void HackBase::Inject() {

	Logger::Initialize();
	Hook::Initialize();

}


void HackBase::Deject() {
		
	Hook::Terminate();


	Logger::Info("Closing...");
	std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // wait so you can read message
	Logger::Terminate();

}