#include "Entity.h"

Entity::Entity( Vec2 pos, int8 type )
	:m_texture{ String{ U"texture/enemy.png" } }
{
	Pos = pos;
	Type = type;

	//ストップウォッチの宣言
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
	const double t = Scene::Time();

	//タイプ別の動作処理の分岐
	switch (Type) {
	case 1:

		const Circle Col{ Pos, 32 };

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

	m_texture.scaled(2.0).draw(Pos);
}
