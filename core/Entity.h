#ifndef SR_ENTITY_H
#define SR_ENTITY_H

#include "Component.h"
#include <map>
#include <vector>
#include <string>
//#include "../framework/IVisitable.h"
#include "../framework/IVisitor.h"
namespace SR
{
	class Entity// : public IVisitable
	{
		typedef std::map<std::string, Component*> ComponentMap;
		typedef std::vector<Entity*>				EntityList;
		
		private:
			ComponentMap		m_componentMap;
			Entity*				p_parent;
			EntityList			m_children;	
			
		public:
			Entity();
			~Entity();
		
			void AddComponent( std::string name, Component* component)
			{
				m_componentMap[name] = component;
			}
			
			void Add(Entity* children)
			{
				m_children.push_back(children);
				children->SetParent( this);
			}
			
			void SetParent(Entity* parent)
			{
				p_parent = parent;
			}
			
			Entity* GetParent()
			{
				return p_parent;
			}
			
			void Accept(IVisitor* visitor)
			{
				Entity* entity = this;
				visitor->Visit(this);
				
				for(unsigned int i=0; i< m_children.size(); i++)
				{
					m_children[i]->Accept( visitor);
				}
			}
	};
}
#endif
