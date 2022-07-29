#include "Shot.h"

Shot::Shot( Vec2 pos, Vec2 dir, int vel,int type)
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
		const Circle Col{ Pos, 8 };
		Col.draw();
		m_texture.scaled(2.0).drawAt(Pos);
		break;

	case 2:
		m_texture.scaled(4.0).drawAt(Pos);
		break;
	}
}

Circle Shot::col() {
	return Circle{ Pos, 8 };
}

void Shot::cla() {
	m_texture = Texture{ U"texture/Enemy.png" };
}
