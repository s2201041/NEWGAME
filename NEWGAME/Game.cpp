#include "Game.h"

void Game::update() {
	// 左クリックで
	if (MouseL.down())
	{
		// タイトルシーンに遷移
		changeScene(State::Title);
	}
}

void Game::draw() const
{
	Scene::SetBackground(ColorF(0.2, 0.8, 0.6));

	m_texture.drawAt(Cursor::Pos());
}
