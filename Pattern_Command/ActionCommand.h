#pragma once

#include "Command.h"

class JumpCommand : public Command
{
public :
	virtual void excute(GameActor* pkActor);

	static JumpCommand* GetInstance();
};

class FireCommand : public Command
{
public :
	virtual void excute(GameActor* pkActor);

	static FireCommand* GetInstance();
};

