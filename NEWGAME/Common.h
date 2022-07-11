#pragma once
# include <Siv3D.hpp>

enum class State
{
	Title,
	Select,
	Game,
};

using App = SceneManager<State>;
