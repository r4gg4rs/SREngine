#ifndef SR_GAMESTATEMANAGER_H
#define SR_GAMESTATEMANAGER_H

#include "../utils/singleton.h"
#include "../framework/IGameState.h"

namespace SR
{
	class GameStateManager
	{
		private:
			IGameState*		p_currentState;	
		public:
			GameStateManager() : p_currentState(NULL)
			{ 
			
			}
			~GameStateManager() { }
			
			void Update()
			{
				if(p_currentState) p_currentState->Update();
			}
			
			void ChangeState( IState* newState)
			{
				if(p_currentState) p_currentState->OnExit();
				p_currentState = newState;
				p_currentState->OnStartup();
			}
		
	};
}
#endif
