#include "GameActor.h"
#include <iostream>

GameActor::GameActor()
{

}

GameActor::~GameActor()
{

}

void GameActor::Jump()
{
	std::cout << "Call GameActor::Jump" << std::endl;
}

void GameActor::Fire()
{
	std::cout << "Call GameActor::Fire" << std::endl;
}