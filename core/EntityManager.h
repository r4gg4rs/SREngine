#ifndef SR_ENTITYMANAGER_H
#define SR_ENTITYMANAGER_H

#include <vector>
#include <map>

namespace SR
{
	class EntityManager
	{
		typedef std::vector<std::string> ComponentNameList;
		typedef std::map<std::string, ComponentNameList> EntityMap;
		typedef std::vector<Entity*> EntityList;
		private:
			EntityMap 	m_entityMap;
			EntityList	m_entityList;
		public:
			EntityManager();
			~EntityManager();
			
			void Register(std::string name, std::vector<std::string> componentNameList);
			Entity* Get(std::string name);
	};
}
#endif
