#pragma once

//インクルードガード
#ifndef ENTITY_H
#define ENTITY_H

#include "common.h"
#include "Shot.h"

class Entity {

public:

	//コンストラクタ
	Entity(Vec2 pos, int typ);

	//１フレーム毎の処理
	void update();

	//描画
	void draw() const ;

	//コライダーを返す関数
	Circle col();

	//諸突処理関数
	void cla();

	//ショットの定義
	Array<Shot> shot;

private:


	Texture m_texture;

	//座標と向きの定義
	Vec2 Pos, Dir;

	//速度の定義
	int Vel;

	//敵の種類の定義
	int Type;

	//敵のHPの定義
	int Hp;

	double size;

	//タイマー変数の定義
	double Time;
};

#endif
