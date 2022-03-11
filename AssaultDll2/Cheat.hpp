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

	void Initialize();

	namespace Header {
		typedef void(__cdecl* i_ChatMessage)(const char*, const char*);
		typedef void(__cdecl* i_BottomMessage)(const char*);
		typedef int(__cdecl* i_SDL_ShowCursor)(int);
	}

	namespace Use {
		// Static loaded
		extern Header::i_ChatMessage ChatMessage;
		extern Header::i_BottomMessage BottomMessage;

		// Dynamic loaded
		extern Header::i_SDL_ShowCursor SDLShowCursor; 
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

namespace Hacks {

	void DisableAll();

	namespace Player {
		void EnableGodMode();
		void DisableGodMode();
	}

	namespace Weapon {
		void EnableInfiniteAmmo();
		void DisableInfiniteAmmo();
	}



}

namespace Offsets {
	namespace GameFunction {
		extern DWORD ChatMessage;
		extern DWORD BottomMessage;
	}

	namespace Hacks {
		extern DWORD DecreaseAmmo;
	}
}