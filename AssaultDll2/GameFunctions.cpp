#include "pch.h"
#include "Cheat.hpp"

DWORD GameFunction::Offset::ChatMessage = 0x004d8cd0;
DWORD GameFunction::Offset::BottomMessage = 0x0045c920;

GameFunction::Header::i_ChatMessage GameFunction::Use::ChatMessage = (Header::i_ChatMessage)GameFunction::Offset::ChatMessage;
GameFunction::Header::i_BottomMessage BottomMessage = (GameFunction::Header::i_BottomMessage)GameFunction::Offset::BottomMessage;
