#include "TestScene.h"
#include "Engine/Entity.h"
#include "Graphics/ShapeComponent.h"
#include "Engine/TransformComponent.h"

void TestScene::onStart()
{
	using namespace GameEngine;
	using namespace GameGraphics;

	// Setup entity
	Entity* entity = new Entity();
	entity->getTransform()->setLocalScale({ 100, 100 });
	entity->getTransform()->setLocalPosition({ 400, 400 });

	ShapeComponent* shapeComponent = new ShapeComponent();
	shapeComponent->setShapeType(ShapeType::CIRCLE);
	
	entity->addComponent(shapeComponent);

	addEntity(entity);
}
