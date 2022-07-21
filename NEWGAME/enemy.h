#pragma once

//インクルードガード
#ifndef ENEMY_H
#define ENEMY_H

#include "entity.h"

class enemy : entity {

	int8 hp = 0;

	Vec2 Pos{0,0};
};

#endif
