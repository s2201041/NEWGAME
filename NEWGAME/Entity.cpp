#include "Entity.h"

Entity::Entity(const String& string)
	:m_texture{ string }
{
	Pos = { Scene::Center() };
}

void Entity::update()
{
	Pos.x += Scene::DeltaTime()*100;
}

void Entity::draw() const
{
	m_texture.scaled(2.0).draw(Pos);
}
