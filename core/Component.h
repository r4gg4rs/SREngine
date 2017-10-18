#ifndef SR_COMPONENT_H
#define SR_COMPONENT_H

namespace SR
{
	typedef unsigned int ID;
	class Entity;
	class Component
	{
		private:
			static ID	s_nextID;
		private:
			ID			m_id;
			Entity*		p_parent;
		public:
			virtual ~Component() { }
			
			void 	SetOwner(Entity* entity);
			Entity*	GetOwner();
			
		public:
			static GetNextID();
	};
}
#endif
