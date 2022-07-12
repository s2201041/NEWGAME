# include "Common.h"
# include "Title.h"
# include "Select.h"
# include "Game.h"
# include "Select.h"

//変更

void Main()
{
	//assetの追加

	FontAsset::Register(U"TitleFont", 60, Typeface::Heavy, FontStyle::Bitmap);

	TextureAsset::Register(U"haikei", U"texture/haikei.png", TextureDesc::Mipped);

	//sceneの追加

	App manager;
	
	manager.add<Title>(State::Title);

	manager.add<Select>(State::Select);

	manager.add<Game>(State::Game);

	while (System::Update())
	{
		//ドット感
		const ScopedRenderStates2D state(SamplerState::ClampNearest);

		//window名
		Window::SetTitle(U"NewGame");

		if (not manager.update())
		{
			break;
		}
	}
}
