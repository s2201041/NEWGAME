#include "Game.h"


Game::Game(const InitData& init)
	: IScene{ init }
{
	//デバッグ用
	Print << getData().stage;

	//テクスチャの初期化
	player = Texture{ U"texture/player.png" };

}

void Game::update() {

	//プレイヤーの動作処理
	playerAction();

	//敵の動作処理
	enemy.update();

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

	player.scaled(2.0).draw(playerPos);

	//敵の描画処理
	enemy.draw();
}

void Game::playerAction()
{
	const Vec2 move = Vec2{ (getData().inputRight.pressed() - getData().inputLeft.pressed()), (getData().inputDown.pressed() - getData().inputUp.pressed()) }
	.setLength(deltaTime * playerSpeed * (KeyShift.pressed() ? 0.5 : 1.0));

	playerPos.moveBy(move).clamp(Scene::Rect());
}
