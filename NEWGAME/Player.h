#pragma once

//インクルードガード
#ifndef PLAYER_H
#define PLAYER_H

#include "common.h"
#include "Shot.h"

class Player {

public:

	//コンストラクタ
	Player(Vec2 pos, Vec2 dir, int vel);

	//１フレーム毎の処理
	void update();

	//描画
	void draw() const;

	//ショットの定義
	Array<Shot> shot;

private:

	Texture m_texture;

	//座標と向きの定義
	Vec2 Pos, Dir;

	//速度の定義
	int8 Vel;

	const double deltaTime = Scene::DeltaTime();
};

#endif
