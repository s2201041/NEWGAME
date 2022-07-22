#pragma once

//インクルードガード
#ifndef ENTITY_H
#define ENTITY_H

#include "common.h"

class entity {

public:

	//コンストラクタ
	entity(const String& string)
		:m_texture{ string }
	{
	}

	//１フレーム毎の処理
	void update() {
			Pos.x -= 1 ;
	}

	//描画
	void draw() const{
		m_texture.scaled(2.0).draw(Pos);
	}

private:

	Texture m_texture;

	Vec2 Pos{ 0,0 };
};

#endif
