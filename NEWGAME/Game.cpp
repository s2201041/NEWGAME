#include "Game.h"
#include "enemy.h"
Game::Game(const InitData& init)
	: IScene{ init }
{
	Print << getData().stage;
	player = Texture{ U"texture/player.png" };
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

	if (getData().inputUp.pressed()|| getData().inputDown.pressed())
	{
		player = Texture{ U"texture/player.png" };
	}

	if (getData().inputLeft.pressed())
	{
		player = Texture{ U"texture/player2.png" };
	}
}

void Game::draw() const
{

	TextureAsset(U"haikei").scaled(2.0).draw();

	//enemy.scaled(2.0).draw(enemyPos);

	player.scaled(2.0).draw(playerPos);
}
