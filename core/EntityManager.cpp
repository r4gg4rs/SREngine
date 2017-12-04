#include "EntityManager.h"

using namespace SR;

Entity* EntityManager::Get(std::string name)
{
	Entity* entity = new Entity();

	ComponentManager cmanager = ComponentManager::GetSingleton();
	ComponentNameList namelist = m_entityMap[name];
	
	for( unsigned int i= 0; i<  namelist.size(); i++)
	{
		Component* comp = cmanager.Get( namelist[i] );
		entity->Add(name, comp);
	}
	m_entityList.push_back( entity);
	return entity;
}
