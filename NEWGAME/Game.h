#pragma once
#include "Common.h"
class Game : public App::Scene
{
public:

	Game(const InitData& init)
		: IScene{ init }
	{
	}


	void update() override;

	void draw() const override;

private:

	Vec2 playerPos{ 400, 500 };

};
