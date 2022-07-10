#include "Game.h"



void Game::update() {
	// 左クリックで

	constexpr double playerSpeed = 550.0;

	const double deltaTime = Scene::DeltaTime();

	//プレイヤーを動かすやつ
	const Vec2 move = Vec2{ (KeyRight.pressed() - KeyLeft.pressed()), (KeyDown.pressed() - KeyUp.pressed()) }
	.setLength(deltaTime * playerSpeed * (KeyShift.pressed() ? 0.5 : 1.0));
	playerPos.moveBy(move).clamp(Scene::Rect());

	if (MouseL.down())
	{
		// タイトルシーンに遷移
		changeScene(State::Title);
	}
}

void Game::draw() const
{
	//ドット感を残すおまじない的な何か
	const ScopedRenderStates2D state(SamplerState::ClampNearest);

	TextureAsset(U"player").scaled(4.0).draw(playerPos);

	Scene::SetBackground(ColorF(0.2, 0.8, 0.6));
}
