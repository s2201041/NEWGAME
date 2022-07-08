#pragma once
# include <Siv3D.hpp>

enum class scene{
	Title,
	Game
};

using App = SceneManager<scene>
