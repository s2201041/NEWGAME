#pragma once

#include "Game.cpp"

class Game2 : Game {
	// コンストラクタ（必ず実装）
	Game2(const InitData& init);

	// 更新関数（オプションb）
	void update() override;

	// 描画関数（オプション）
	void draw() const override;
};
