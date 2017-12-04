/**
	@author 	Jani Haippo
	@version	18.10.2017
	
	ComponentManager
**/


#ifndef SR_COMPONENTMANAGER_H
#define SR_COMPONENTMANAGER_H

#include <map>
#include <vector>
#include <string>
#include "../utils/singleton.h"
#include "Component.h"

namespace SR
{
	class ComponentManager : public Singleton<ComponentManager>
	{
		typedef std::vector<Component*> ComponentList;
		typedef Component*(*ComponentCreator)();
		typedef std::map<std::string,ComponentCreator> CreatorMap;		
		
				
		private:
			ComponentList		m_componentList;
			CreatorMap			m_creatorMap;
			
		public:
			ComponentManager();
			~ComponentManager();
		
			void RegisterComponent(std::string name, ComponentCreator component);
			Component* GetComponent(std::string name);
	};
}
#endif
