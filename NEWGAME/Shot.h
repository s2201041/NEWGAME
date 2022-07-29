#pragma once

//インクルードガード
#ifndef SHOT_H
#define SHOT_H

#include "common.h"

class Shot {

public:

	//コンストラクタ
	Shot( Vec2 pos, Vec2 dir, int vel,int typ);

	//１フレーム毎の処理
	void update();

	//描画
	void draw() const;

	//コライダーを返す関数
	Circle col();

	//衝突処理関数
	void cla();

private:

	Texture m_texture;

	//座標と向きの定義
	Vec2 Pos, Dir;

	//速度の定義
	int Vel;

	//球の種類の定義
	int Type;
};

#endif
