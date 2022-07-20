#pragma once

//インクルードガード
#ifndef ENEMY_H
#define ENEMY_H

#include "entity.h"

class enemy : entity {

	//コンストラクタ
	enemy();

	int8 hp;

	Vec2 Pos;
};

#endif
