#include "Player.h"

Player::Player(Vec2 pos, Vec2 dir, int vel)
	:m_texture{ U"texture/player.png" }
{
	Pos = pos;
	Vel = vel;
	Dir = dir;
}

void Player::update() 
{
	const Circle Col{ Pos, 32 };

	//キー操作
	const Vec2 move = Vec2{ (KeyRight.pressed() - KeyLeft.pressed()), (KeyDown.pressed() - KeyUp.pressed()) }
	.setLength(deltaTime * Vel * (KeyShift.pressed() ? 0.5 : 1.0));

	Pos.moveBy(move).clamp(Scene::Rect());

	if (KeySpace.down()) {
		shot << Shot{ Pos ,{0,-1} ,100 ,1 };
	}


	//ショットの動作処理
	for (auto& sh : shot)
		sh.update();
}

void Player::draw() const
{
	m_texture.scaled(2.0).drawAt(Pos);

	for (auto& en : shot)
		en.draw();

	const Circle Col{ Pos, 32 };

	Col.draw();
}

