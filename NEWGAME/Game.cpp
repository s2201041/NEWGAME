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

	for(auto& sh : shot)
		sh.update();

	if (MouseL.down())
	{
		shot << Shot{ String{ U"texture/enemy.png" } ,playerPos ,90 ,90 };
	}
}

void Game::draw() const
{
	TextureAsset(U"haikei").scaled(2.0).draw();

	player.scaled(2.0).draw(playerPos);

	//敵の描画処理
	enemy.draw();

	for (auto& sh : shot)
		sh.draw();

	FontAsset(U"TitleFont")(playerPos.x).drawAt(Scene::Center());
}

inline void Game::playerAction()
{
	const Vec2 move = Vec2{ (getData().inputRight.pressed() - getData().inputLeft.pressed()), (getData().inputDown.pressed() - getData().inputUp.pressed()) }
	.setLength(deltaTime * playerSpeed * (KeyShift.pressed() ? 0.5 : 1.0));

	playerPos.moveBy(move).clamp(Scene::Rect());
}
