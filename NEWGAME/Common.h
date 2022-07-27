#pragma once
# include <Siv3D.hpp>

//シーン
enum class State
{
	Title,
	Select,
	Game,
};

//シーン間で共有するデータ
struct GameData
{
	//選択したステージ
	int8 stage = 0;

	//キーコンフィグの定義
	InputGroup inputLeft = KeyLeft;
	InputGroup inputRight = KeyRight;
	InputGroup inputUp = KeyUp;
	InputGroup inputDown = KeyDown;
	InputGroup inputShot = KeySpace;
};

using App = SceneManager<State,GameData>;
