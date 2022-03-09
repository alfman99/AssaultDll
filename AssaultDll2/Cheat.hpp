#include "pch.h"

namespace HackBase {

	namespace Options {
		extern bool MenuOpen;
	}

	void Inject();
	void Deject();
}

namespace Logger {
	extern FILE* f;
	void Initialize();
	void Terminate();
	void Info(std::string);
}

namespace GameFunctions {

	namespace Headers {
		typedef void(__cdecl* i_ChatMessage)(const char*, const char*);
		typedef void(__cdecl* i_BottomMessage)(const char*);
	}

}

namespace Hook {

	void Initialize();
	void Terminate();

	namespace Headers {
		typedef BOOL(__stdcall* i_wglSwapBuffers)(HDC hDC);
	}

	namespace Original {
		extern Headers::i_wglSwapBuffers o_wglSwapBuffers;
	}

	namespace Detour {
		BOOL __stdcall h_wglSwapBuffers(HDC hDC);
	}
	
}