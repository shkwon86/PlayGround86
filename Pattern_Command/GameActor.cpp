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

void GameActor::Move(float _x, float _y, float _z)
{
	m_fX = _x;
	m_fY = _y;
	m_fZ = _z;
}