#include "Component.h"

using namespace SR;

ID Component::s_nextID = 1;

Component::Component() : m_id( GetNextID() )
{

}

Component::~Component()
{

}

void Component::SetOwner(Entity* entity)
{
	p_owner = entity;
}

Entity* Component::GetOwner()
{
	return p_owner;
}


ID Component::GetNextID()
{
	return s_nextID++;
}
