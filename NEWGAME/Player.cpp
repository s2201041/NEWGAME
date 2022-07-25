//#include "Player.h"
//
//Player::Player(Vec2 pos, Vec2 dir, int vel)
//	:m_texture{ U"texture/Shot.png" }
//{
//	Pos = pos;
//	Vel = vel;
//	Dir = dir;
//}
//
//void Player::update()
//{
//	Pos += Dir * (Scene::DeltaTime() * Vel);
//
//	const Vec2 move = Vec2{ (getData().inputRight.pressed() - getData().inputLeft.pressed()), (getData().inputDown.pressed() - getData().inputUp.pressed()) }
//	.setLength(deltaTime * playerSpeed * (KeyShift.pressed() ? 0.5 : 1.0));
//
//	playerPos.moveBy(move).clamp(Scene::Rect());
//}
//
//void Player::draw() const
//{
//	m_texture.scaled(2.0).draw(Pos);
//}

