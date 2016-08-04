#pragma once

class GameActor;

class Command
{
public :
	virtual ~Command() {}
	virtual void excute(GameActor* pkActor) = 0;
};

