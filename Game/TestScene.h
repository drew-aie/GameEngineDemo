#pragma once
#include "Engine/Scene.h"

class GameEngine::Entity;

class TestScene : public GameEngine::Scene
{
public:
	void onStart() override;
	void onUpdate(double deltaTime) override;

private:
	GameEngine::Entity* m_entity;
	float m_accumulatedTime = 0;
};