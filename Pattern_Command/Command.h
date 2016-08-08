#pragma once

class GameActor;

class Command
{
public :
	virtual ~Command() {}
	virtual void excute(GameActor* pkActor) = 0;
	virtual void undo() = 0;
};

