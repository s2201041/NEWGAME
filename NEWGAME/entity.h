#pragma once

//インクルードガード
#ifndef ENTITY_H
#define ENTITY_H

#include "common.h"

class Entity {

public:

	//コンストラクタ
	Entity(const String& string);

	//１フレーム毎の処理
	void update();

	//描画
	void draw() const ;

private:

	Texture m_texture;
	 
	Vec2 Pos;
};

#endif
