#include "Entity.h"

Entity::Entity( Vec2 pos, int8 typ )
	:m_texture{ String{ U"texture/enemy.png" } }
{
	Pos = pos;
	Typ = typ;

	//ストップウォッチの宣言
	Stopwatch time;

	//デバッグ用
	Print << Typ;

	//タイプ別の初期値の初期化
	switch (Typ){
	case 1:
		time.start();
		Dir = {0,1};
		Vel = 1100;
		Hp = 100;
		break;
	}
}

void Entity::update()
{
	const double t = Scene::Time();

	//タイプ別の動作処理の分岐
	switch (Typ) {
	case 1:

		Pos.x = Scene::Center().x - Sin(Scene::Time()) * 250;

		if()
			shot << Shot{ Pos ,{0,1} ,100 ,1 };

		break;
	}

	for (auto& sh : shot)
		sh.update();

}

void Entity::draw() const
{

	for (auto& sh : shot)
		sh.draw();

	m_texture.scaled(2.0).draw(Pos);
}
