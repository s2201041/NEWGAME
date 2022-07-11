#include "Game.h"

Game::Game(const InitData& init)
	: IScene{ init }
{
	TextureAsset::Register(U"enemy", U"texture/enemy.png", TextureDesc::Mipped);

	TextureAsset::Register(U"player", U"texture/player.png", TextureDesc::Mipped);
}

void Game::update() {

	//プレイヤーを動かす
	const Vec2 move = Vec2{ (KeyRight.pressed() - KeyLeft.pressed()), (KeyDown.pressed() - KeyUp.pressed()) }
	.setLength(deltaTime * playerSpeed * (KeyShift.pressed() ? 0.5 : 1.0));

	playerPos.moveBy(move).clamp(Scene::Rect());

	if (MouseL.down())
	{
		// タイトルシーンに遷移
		changeScene(State::Title);
	}
}

void Game::draw() const
{

	TextureAsset(U"haikei").scaled(4.0).draw();

	TextureAsset(U"enemy").scaled(4.0).draw(enemyPos);

	TextureAsset(U"player").scaled(4.0).draw(playerPos);

}
