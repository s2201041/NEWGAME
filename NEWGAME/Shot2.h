#pragma once

//インクルードガード
#ifndef SHOT2_H
#define SHOT2_H

#include "common.h"
#include "Shot.h"

class Shot2 : public  Shot{

public:

	//１フレーム毎の処理
	void update();

	//描画
	void draw() const;

private:

	Texture m_texture;

	Vec2 Pos;

	//向きと速度の定義
	int8 Vel, Dir;
};

#endif
