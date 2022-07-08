# include "Common.h"
# include "Title.h"

void Main()
{
	FontAsset::Register(U"TitleFont", 60, Typeface::Heavy);

	App manager;

	manager.add<Title>(U"Title");

	while (System::Update())
	{
		if (not manager.update())
		{
			break;
		}
	}
}
