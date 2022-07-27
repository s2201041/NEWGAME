#pragma once

//インクルードガード
#ifndef ENTITY_H
#define ENTITY_H

#include "common.h"
#include "Shot.h"

class Entity {

public:

	//コンストラクタ
	Entity(Vec2 pos, int8 typ);

	//１フレーム毎の処理
	void update();

	//描画
	void draw() const ;

private:


	Texture m_texture;

	//座標と向きの定義
	Vec2 Pos, Dir;

	//速度の定義
	int8 Vel;

	//敵の種類の定義
	int8 Typ;

	//敵のHPの定義
	int8 Hp;

	//敵のショットの定義
	Array<Shot> shot;
};

#endif
