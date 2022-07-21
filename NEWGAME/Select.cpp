#include "Select.h"

Select::Select(const InitData& init)
	: IScene{ init }
{
}

void Select::update()
{

	// ボタン処理
	if (SimpleGUI::Button(U"Stage1", Vec2{ 100, 100 }))
	{
		// ゲームシーンに遷移
		changeScene(State::Game);

		//ステージ1を選択
		getData().stage = 1;
	}

	if (SimpleGUI::Button(U"Stage2", Vec2{ 100, 150 }))
	{
		// ゲームシーンに遷移
		changeScene(State::Game);

		//ステージ2を選択
		getData().stage = 2;
	}

	if (SimpleGUI::Button(U"Stage3", Vec2{ 100, 200 }))
	{
		// ゲームシーンに遷移
		changeScene(State::Game);

		//ステージ3を選択
		getData().stage = 3;
	}

}

void Select::draw() const
{
	//TextureAsset(U"haikei").scaled(4.0).draw();

	FontAsset(U"TitleFont")(U"Stage Select").drawAt(400, 100);
}
