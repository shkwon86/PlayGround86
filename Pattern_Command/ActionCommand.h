#pragma once

#include "Command.h"

class JumpCommand : public Command
{
public :
	virtual void excute(GameActor* pkActor);
	virtual void undo();

	static JumpCommand* GetInstance();
};

class FireCommand : public Command
{
public :
	virtual void excute(GameActor* pkActor);
	virtual void undo();

	static FireCommand* GetInstance();
};

class MoveActorCommand : public Command
{
public :
	MoveActorCommand(GameActor* pkActor, float destX, float destY, float destZ);
	virtual void excute(GameActor* pkActor);
	virtual void undo();

private :
	float m_fX;
	float m_fY;
	float m_fZ;
	float m_fBeforeX;
	float m_fBeforeY;
	float m_fBeforeZ;
}