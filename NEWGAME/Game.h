#pragma once
#include "Common.h"
#include "Entity.h"
#include "Player.h"

class Game : public App::Scene
{
public:

	// コンストラクタ（必ず実装）
	Game(const InitData& init);

	// 更新関数（オプションb）
	void update() override;

	// 描画関数（オプション）
	void draw() const override;

	Array<Player> player;

	Array<Entity> entity;

	Array<Shot> shot;

private:

	static constexpr double playerSpeed = 550.0;

	const double deltaTime = Scene::DeltaTime();
};
