#include "TestScene.h"
#include "Engine/Entity.h"
#include "Graphics/ShapeComponent.h"
#include "Engine/TransformComponent.h"
#include <chrono>
#include <cmath>

void TestScene::onStart()
{
	// Setup entity
	m_entity = new GameEngine::Entity();
	m_entity->getTransform()->setLocalScale({ 100, 100 });
	m_entity->getTransform()->setLocalPosition({ 400, 400 });

	GameGraphics::ShapeComponent* shapeComponent = new GameGraphics::ShapeComponent();
	shapeComponent->setShapeType(GameGraphics::ShapeType::CIRCLE);
	m_entity->addComponent(shapeComponent);

	addEntity(m_entity);
}

void TestScene::onUpdate(double deltaTime)
{
	m_accumulatedTime += deltaTime;

	float circleRadius = 100;
	float speedScale = 0.5f;
	GameMath::Vector2 newPosition = { 
		sin(m_accumulatedTime * speedScale) * circleRadius + 400,
		cos(m_accumulatedTime * speedScale) * circleRadius + 400 };
	m_entity->getTransform()->setLocalPosition(newPosition);
}
