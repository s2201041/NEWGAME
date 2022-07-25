#include "Shot2.h"


void Shot2::update()
{
	Pos.x += cos(Dir) * (Scene::DeltaTime() * Vel);
	Pos.y += sin(Dir) * (Scene::DeltaTime() * Vel);
}

void Shot2::draw() const
{
	m_texture.scaled(2.0).draw(Pos);
}

