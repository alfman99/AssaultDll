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
	
	void Info(std::string message);

}

namespace GameFunction {

	namespace Header {
		typedef void(__cdecl* i_ChatMessage)(const char*, const char*);
		typedef void(__cdecl* i_BottomMessage)(const char*);
	}

	namespace Offset {
		extern DWORD ChatMessage;
		extern DWORD BottomMessage;
	}

	namespace Use {
		extern Header::i_ChatMessage ChatMessage;
		extern Header::i_BottomMessage BottomMessage;
	}

}

namespace Hook {

	void Initialize();
	void Terminate();

	namespace Header {
		typedef BOOL(__stdcall* i_wglSwapBuffers)(HDC);
	}

	namespace Original {
		extern Header::i_wglSwapBuffers o_wglSwapBuffers;
	}

	namespace Detour {
		BOOL __stdcall h_wglSwapBuffers(HDC);
	}
	
}