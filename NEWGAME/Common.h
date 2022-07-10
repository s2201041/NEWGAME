#pragma once
# include <Siv3D.hpp>

enum class State
{
	Title,
	Game
};

using App = SceneManager<State>;


