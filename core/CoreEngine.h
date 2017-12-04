#ifndef SR_COREENGINE_H
#define SR_COREENGINE_H

#include "../framework/ISystem.h"
#include <vector>
#include "../utils/singleton.h"
#include <iostream>

namespace SR
{
	class CoreEngine : public Singleton<CoreEngine>
	{
		typedef std::vector<ISystem*> SystemList;
		
		private:
			bool		m_isRunning;
			SystemList	m_systemList;
		public:
		
			void Start()
			{
				std::cout << "CoreEngine : start " << std::endl;
				m_isRunning = true;
				while(m_isRunning)
				{
					Update();
				}
			}
			
			void Stop() 
			{
				std::cout << "CoreEngine: stop " << std::endl;
				m_isRunning = false;
			}
			
			void AddSystem(ISystem* system)
			{
				m_systemList.push_back(system);
			}	
			
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
