#pragma once

class GameActor
{
public :
	GameActor();
	virtual ~GameActor();

	void	Jump();
	void	Fire();
	void	Move(float _x, float _y, float _z);

private :
	float m_fX;
	float m_fY;
	float m_fZ;
};