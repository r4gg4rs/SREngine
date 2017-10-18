#include "Component.h"

using namespace SR;

ID Component::s_nextID = 1;

Component::Component : m_nextID( GetNextID() )
{

}

Component::~Component()
{

}

void Component::SetOwner(Entity* entity)
{
	p_entity = entity;
}

Entity* Component::GetOwner()
{
	return p_entity;
}


ID Component::GetNextID()
{

}
