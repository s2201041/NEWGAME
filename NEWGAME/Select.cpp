#include "Select.h"

Select::Select(const InitData& init)
	: IScene{ init }
{
}

void Select::update()
{
	// 左クリックで
	if (MouseL.down())
	{
		// ゲームシーンに遷移
		changeScene(State::Game);
	}
}

void Select::draw() const
{
	TextureAsset(U"haikei").scaled(4.0).draw();

	FontAsset(U"TitleFont")(U"Stage Select").drawAt(400, 100);
}
