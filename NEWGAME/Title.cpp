#include "Title.h"

Title::Title(const InitData& init)
	: IScene{ init }
{
}

void Title::update()
{
	// 左クリックで
	if (MouseL.down())
	{
		// ゲームシーンに遷移
		changeScene(State::Select);
	}
}

void Title::draw() const
{
	TextureAsset(U"haikei").scaled(4.0).draw();

	FontAsset(U"TitleFont")(U"My Game").drawAt(400, 100);
}
