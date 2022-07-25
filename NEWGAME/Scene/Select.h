#pragma once
#include "../Common.h"

class Select : public App::Scene
{
public:

	// コンストラクタ（必ず実装）
	Select(const InitData& init);

	// 更新関数（オプション）
	void update() override;

	// 描画関数（オプション）
	void draw() const override;
};
