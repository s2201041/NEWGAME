#pragma once
# include <Siv3D.hpp>

//masterbranch

enum class State
{
	Title,
	Select,
	Game,
};

using App = SceneManager<State>;
