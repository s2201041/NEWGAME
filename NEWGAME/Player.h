﻿#pragma once

//インクルードガード
#ifndef PLAYER_H
#define PLAYER_H

#include "common.h"

class Player {

public:

	//コンストラクタ
	Player(Vec2 pos, Vec2 dir, int vel);

	//１フレーム毎の処理
	void update();

	//描画
	void draw() const;

private:

	Texture m_texture;

	//座標と向きの定義
	Vec2 Pos, Dir;

	//速度の定義
	int8 Vel;

	static constexpr double playerSpeed = 550.0;

	const double deltaTime = Scene::DeltaTime();
};

#endif
