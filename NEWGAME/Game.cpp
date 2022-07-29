#include "Game.h"


Game::Game(const InitData& init)
	: IScene{ init }
{
	//ステージ表示
	Print << getData().stage;

	entity << Entity{ { 600 , 50 },1 };
	player << Player{ {0,0} , 550 };
}

void Game::update() {


	//敵の動作処理
	for (auto& en : entity)
		en.update();

	//プレイヤーの動作処理
	for (auto& pl : player)
		pl.update();

	//衝突判定
	for (auto& en : entity) {
		for (auto& pl : player)
			for (auto& sh : pl.shot ) 
				if (en.col().intersects(sh.col())){
					sh.cla();
					en.cla();
				}
	}
}

void Game::draw() const
{
	//背景の描画
	TextureAsset(U"haikei").scaled(2.0).draw();

	//敵の描画
	for (auto& sh : entity)
		sh.draw();

	//プレイヤーの描画
	for (auto& pl : player)
		pl.draw();
}

