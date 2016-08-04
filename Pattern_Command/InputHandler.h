#pragma once

class Command;

class InputHandler
{
public :
	InputHandler();
	~InputHandler();

	Command*	handleInput();
};
