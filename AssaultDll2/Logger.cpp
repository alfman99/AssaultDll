#include "pch.h"
#include "Cheat.hpp"

FILE* Logger::f = nullptr;

void Logger::Initialize() {
#if _DEBUG
    // Allocate console
    AllocConsole();
    freopen_s(&Logger::f, "CONOUT$", "w", stdout);
#else

#endif
}

void Logger::Terminate() {
#if _DEBUG
    // Remove Console
    if (Logger::f == 0) {
        return;
    }
    // Close console
    fclose(Logger::f);
    // Cleanup, free console memory
    FreeConsole();
#else
    
#endif
}

void Logger::Info(std::string message) {
#if _DEBUG
    std::cout << message << std::endl;
#else

#endif
}