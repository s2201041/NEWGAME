# include "Common.h"
# include "Title.h"
# include "Select.h"
# include "Game.h"
# include "Select.h"

//開発ベース ver0.0

//機能の更新

void Main()
{
	//sceneを跨いで使用するアセットはここで定義.
	FontAsset::Register(U"TitleFont", 60, Typeface::Heavy, FontStyle::Bitmap);
	TextureAsset::Register(U"haikei", U"texture/haikei.png", TextureDesc::Mipped);

	//sceneの追加
	App manager;
	manager.add<Title>(State::Title);
	manager.add<Select>(State::Select);
	manager.add<Game>(State::Game);

	// ゲームシーンから開始したい場合はこのコメントを外す
	manager.init(State::Select);

	while (System::Update())
	{
		//ドット感を出す呪文
		const ScopedRenderStates2D state(SamplerState::ClampNearest);

		//window名を設定
		Window::SetTitle(U"NewGame");

		if (not manager.update())
		{
			break;
		}
	}
}
