#include "Shot.h"

Shot::Shot( Vec2 pos, Vec2 dir, int8 vel,int8 typ)
	:m_texture{ U"texture/Shot.png" }
{
	Pos = pos;
	Dir = dir;
	Vel = vel;
	Typ = typ;
	Print << Typ;
}

void Shot::update()
{
	switch (Typ) {
	case 1:
		Pos += Dir * (Scene::DeltaTime() * Vel);
		break;
	case 2:
		Pos += Dir * (Scene::DeltaTime() * Vel * 2);
		break;
	}
}

void Shot::draw() const
{
	switch (Typ) {
	case 1:
		m_texture.scaled(2.0).draw(Pos);
		break;
	case 2:
		m_texture.scaled(4.0).draw(Pos);
		break;
	}
}

