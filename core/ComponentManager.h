#ifndef SR_COMPONENTMANAGER_H
#define SR_COMPONENTMANAGER_H

#include <map>
#include <vector>
#include "../utils/singleton.h"

namespace SR
{
	class ComponentManager : public Singleton<ComponentManager>
	{
		typedef std::vector<Component*> ComponentList;
		
		private:
			ComponentList		m_componentList;
		public:
			void RegisterComponent(std::string name, ComponentCreator* component);
			Componenent* GetComponent(std::string name);
	};
}
#endif
