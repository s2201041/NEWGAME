#include "Shot.h"

Shot::Shot(const String& string,Vec2 pos,int vel,int dir)
	:m_texture{ string }
{
	Pos = pos;
	Vel = vel;
	Dir = dir;
}

void Shot::update()
{
	Pos.x += cos(Dir) * (Scene::DeltaTime() * Vel);
	Pos.y += sin(Dir) * (Scene::DeltaTime() * Vel);
}

void Shot::draw() const
{
	m_texture.scaled(2.0).draw(Pos);
}

