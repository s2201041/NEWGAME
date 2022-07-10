# include "Common.h"
# include "Title.h"
# include "Game.h"

void Main()
{
	FontAsset::Register(U"TitleFont", 60, Typeface::Heavy);

	TextureAsset::Register(U"player", U"texture/player.png", TextureDesc::Mipped);

	App manager;

	manager.add<Title>(State::Title);

	manager.add<Game>(State::Game);

	while (System::Update())
	{
		if (not manager.update())
		{
			break;
		}
	}
}
