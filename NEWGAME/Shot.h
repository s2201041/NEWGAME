#pragma once

//インクルードガード
#ifndef SHOT_H
#define SHOT_H

#include "common.h"

class Shot {

public:

	//コンストラクタ
	Shot( Vec2 pos, Vec2 dir, int8 vel,int8 typ);

	//１フレーム毎の処理
	void update();

	//描画
	void draw() const;

private:

	Texture m_texture;

	//座標と向きの定義
	Vec2 Pos ,Dir;

	//速度の定義
	int8 Vel;

	//球の種類の定義
	int8 Type;
};

#endif
