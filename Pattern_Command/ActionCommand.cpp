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