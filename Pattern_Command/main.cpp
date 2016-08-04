#include <iostream>
#include "Command.h"
#include "InputHandler.h"
#include "GameActor.h"

void main()
{
	GameActor kActor;
	InputHandler kInputHandler;

	while (1)
	{
		Command* comm = kInputHandler.handleInput();
		if (comm)
			comm->excute(&kActor);
	}
}
