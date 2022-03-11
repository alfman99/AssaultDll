#include "pch.h"
#include "Cheat.hpp"


// Dyanimc loaded
void GameFunction::Initialize() {
	
	HMODULE SDL2_handle = GetModuleHandleA("SDL2.dll");
	if (SDL2_handle == 0) {
		Logger::Info("Error loading SDL2.dll");
		return;
	}

	FARPROC fun_handle = GetProcAddress(SDL2_handle, "SDL_ShowCursor");
	if (fun_handle == 0) {
		Logger::Info("Error finding SDL_ShowCursor in SDL2.dll");
		return;
	}

	GameFunction::Use::SDLShowCursor = (GameFunction::Header::i_SDL_ShowCursor)fun_handle;

}

// Static loaded
GameFunction::Header::i_ChatMessage GameFunction::Use::ChatMessage = (GameFunction::Header::i_ChatMessage)Offsets::GameFunction::ChatMessage;
GameFunction::Header::i_BottomMessage GameFunction::Use::BottomMessage = (GameFunction::Header::i_BottomMessage)Offsets::GameFunction::BottomMessage;

// Dynamic loaded
GameFunction::Header::i_SDL_ShowCursor GameFunction::Use::SDLShowCursor = (GameFunction::Header::i_SDL_ShowCursor)NULL;