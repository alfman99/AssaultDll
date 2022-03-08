#include "pch.h"

namespace Logger {
	extern FILE* f;
	void Initialize();
	void Terminate();
}

namespace HackBase {
	void Inject();
	void Deject();
}