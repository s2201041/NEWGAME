#pragma once

//インクルードガード
#ifndef SHOT_H
#define SHOT_H

#include "common.h"

class Shot {

public:

	//コンストラクタ
	Shot(const String& string, Vec2 pos, int vel, int dir);

	//１フレーム毎の処理
	void update();

	//描画
	void draw() const;

private:

	Texture m_texture;

	Vec2 Pos;

	//向きと速度の定義
	int8 Vel , Dir;
};

#endif
