// dllmain.cpp : Define el punto de entrada de la aplicación DLL.
#include "pch.h"
#include "Cheat.hpp"

DWORD WINAPI CheatEntry(LPVOID param) {

    HackBase::Inject();

    // Infinite loop waiting for KEY to exit hack
    while (!GetAsyncKeyState(VK_INSERT)) {
        std::this_thread::sleep_for(std::chrono::milliseconds(75));
    }

    HackBase::Deject();

    FreeLibraryAndExitThread((HMODULE)param, FALSE);
    return 0;
}

BOOL APIENTRY DllMain( HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
        // Create new thread mainprocess
        CreateThread(NULL, 0, CheatEntry, hModule, NULL, NULL);

        // Disable DLL_THREAD_ATTACH / DLL_TREAD_DETACH
        DisableThreadLibraryCalls(hModule);
        break;
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

