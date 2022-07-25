#include "Shot.h"

Shot::Shot( Vec2 pos, Vec2 dir, int vel)
	:m_texture{ U"texture/Shot.png" }
{
	Pos = pos;
	Vel = vel;
	Dir = dir;
}

void Shot::update()
{
	Pos += Dir * (Scene::DeltaTime() * Vel);
}

void Shot::draw() const
{
	m_texture.scaled(2.0).draw(Pos);
}

