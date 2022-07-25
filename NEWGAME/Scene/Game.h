#pragma once
#include "../Common.h"
#include "../Entity.h"
#include "../Shot.h"
#include "../Player.h"

class Game : public App::Scene
{
public:

	// コンストラクタ（必ず実装）
	Game(const InitData& init);

	// 更新関数（オプションb）
	void update() override;

	// 描画関数（オプション）
	void draw() const override;

	//プレイヤー動作関数
	void playerAction();

	Entity enemy{ String{ U"texture/enemy.png" } };

	Array<Shot> shot;


private:

	static constexpr double playerSpeed = 550.0;

	const double deltaTime = Scene::DeltaTime();

	//プレイヤーの宣言
	//Player player;

	//オブジェクトの座標を宣言
	Vec2 enemyPos{ 400, 500 };

	Vec2 playerPos{ 400, 500 };

	//テクスチャの読み込み
	//const Texture player{ U"texture/player.png" };
	Texture player;

};
