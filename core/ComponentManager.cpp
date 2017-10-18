#include "ComponentManager.h"

using namespace SR;

ComponentManager::ComponentManager()
{

}

ComponentManager::~ComponentManager()
{

}

void ComponentManager::RegisterComponent(std::string name, ComponentCreator componentCreator)
{
	m_creatorMap[name] = componentCreator;
}

Component* ComponentManager::GetComponent(std::string name)
{
	Component* component = m_creatorMap[name]();
	m_componentList.push_back( component);
	return component;
	
}



