#ifndef SR_COREENGINE_H
#define SR_COREENGINE_H

#include "../framework/ISystem.h"
#include <vector>


namespace SR
{
	class CoreEngine
	{
		typedef std::Vector<ISystem*> SystemList;
		
		private:
			bool		m_isRunning;
			SystemList	m_systemList;
		public:
		
			void Start()
			{
				m_isRunning = true;
				while(m_isRunning)
				{
					Update();
				}
			}
			
			void Stop() 
			{
			
			}	m_isRunning = false;
			
			void Update()
			{	
				/*
				for( SystemList::iterator it = m_systemList.begin(); it != m_systemList::end; ++ it)
				{
					it->Update();		
				}
				*/
				
				for(auto i : m_systemList)
				{
					i->Update();
				}
				
			}
	};
}

/**
namespace SR
{
	class CoreEngine
	{
		private:
			std::vector<ISystem*>	m_systems;
		public:
			CoreEngine() { }
			~CoreEngine() { }
			
			void Add(ISystem* system)
			{
				m_systems.push_back(system);
			}
			
			void Update()
			{
				for(int i=0; i< m_systems.size(); i++ )
				{
					m_systems[i]->Update();
				}
			}
	};
}

**/
#endif
