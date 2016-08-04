#include "InputHandler.h"
#include "ActionCommand.h"
#include <Windows.h>

InputHandler::InputHandler()
{

}

InputHandler::~InputHandler()
{

}

Command* InputHandler::handleInput()
{
	const int VK_A = 0x41;
	const int VK_S = 0x53;

	if (GetAsyncKeyState(VK_A) & 0x8000)		return JumpCommand::GetInstance();
	if (GetAsyncKeyState(VK_S) & 0x8000)		return FireCommand::GetInstance();

	return NULL;
}