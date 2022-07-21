#pragma once

//インクルードガード
#ifndef ENTITY_H
#define ENTITY_H

#include "common.h"

class entity {

	//１フレーム毎の処理
	void update() {
	}

	//描画
	void draw() {
	}

	int8 hp ;

	Vec2 pos ;
};

#endif
