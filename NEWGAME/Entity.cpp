#include "Entity.h"

Entity::Entity( Vec2 pos, int type )
	:m_texture{ String{ U"texture/enemy.png" } }
{
	Pos = pos;
	Type = type;

	size = 2.0;

	//ストップウォッチの初期化
	Time = 0;

	//デバッグ用
	Print << Type;

	//タイプ別の初期値の初期化
	switch (Type){
	case 1:
		Dir = {0,1};
		Vel = 1100;
		Hp = 100;
		break;
	}
}

void Entity::update()
{
	//タイプ別の動作処理の分岐
	switch (Type) {
	case 1:

		Pos.x = Scene::Center().x - Sin(Scene::Time()) * 250;

		if (Time > 0.5) {
			shot << Shot{ Pos ,{0,1} ,100 ,1 };
			Time = 0;
		}
		//タイマーの加算
		Time += Scene::DeltaTime();

		break;
	}

	//ショットの処理
	for (auto& sh : shot)
		sh.update();
}

void Entity::draw() const
{
	//ショットの描画
	for (auto& sh : shot)
		sh.draw();

	m_texture.scaled(size).drawAt(Pos);
}

Circle Entity::col() {
	return Circle{ Pos, 32 };
}

void Entity::cla() {
	for (size = 0; size < 2 ; ) {
		size += Scene::DeltaTime();
	}
}
