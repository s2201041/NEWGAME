#include "Game.h"
#include "enemy.h"
Game::Game(const InitData& init)
	: IScene{ init }
{
	Print << getData().stage;
}

void Game::update() {

	//プレイヤーを動かす
	const Vec2 move = Vec2{ (getData().inputRight.pressed() - getData().inputLeft.pressed()), (getData().inputDown.pressed() - getData().inputUp.pressed()) }
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

	enemy.scaled(4.0).draw(enemyPos);

	player.scaled(4.0).draw(playerPos);
}
