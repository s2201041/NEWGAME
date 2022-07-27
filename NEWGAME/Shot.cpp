#include "Shot.h"

Shot::Shot( Vec2 pos, Vec2 dir, int8 vel,int8 type)
	:m_texture{ U"texture/Shot.png" }
{
	Pos = pos;
	Dir = dir;
	Vel = vel;
	Type = type;
}

void Shot::update()
{
	switch (Type) {
	case 1:
		const Circle Col{ Pos, 8 };
		Pos += Dir * (Scene::DeltaTime() * Vel * 10 );
		break;
	case 2:
		Pos += Dir * Abs(sin(Scene::Time()/10)) * 10;
		break;
	}
}

void Shot::draw() const
{
	switch (Type) {
	case 1:
		m_texture.scaled(2.0).drawAt(Pos);
		break;
	case 2:
		m_texture.scaled(4.0).drawAt(Pos);
		break;
	}
}

