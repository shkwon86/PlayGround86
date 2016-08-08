#include "ActionCommand.h"
#include "GameActor.h"

void JumpCommand::excute(GameActor* pkActor)
{
	if (pkActor)
		pkActor->Jump();
}

JumpCommand* JumpCommand::GetInstance()
{
	static JumpCommand sInstance;
	return &sInstance;
}


void FireCommand::excute(GameActor* pkActor)
{
	if (pkActor)
		pkActor->Fire();
}

FireCommand* FireCommand::GetInstance()
{
	static FireCommand sInstance;
	return &sInstance;
}

MoveActorCommand::MoveActorCommand(GameActor* pkActor, float destX, float destY, float destZ)
	:	m_fX(destX), m_fY(destY), m_fZ(destZ), m_fBeforeX(0.0f), m_fBeforeY(0.0f), m_fBeforeZ(0.0f)
{

}

void MoveActorCommand::excute(GameActor* pkActor)
{

}

void MoveActorCommand::undo()
{

}
