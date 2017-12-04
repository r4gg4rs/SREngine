/**
	@author		Jani Haippo
	@version	18.10.2017
	
	SDL input sytem	
**/

#ifndef SR_SDL_INPUTSYSTEM_H
#define SR_SDL_INPUTSYSTEM_H

#include "../framework/ISystem.h"
#include <SDL2/SDL.h>
#include <map>
#include <vector>
#include "../input/InputListener.h"
#include "../utils/singleton.h"
#include "../core/CoreEngine.h"	

namespace SR
{
	namespace SDL
	{
		class InputSystem : public Singleton<InputSystem>, public ISystem
		{
			typedef std::vector<SR::Input::InputListener*> ListenerList;
			typedef std::map<const char*, ListenerList> ListenerMap;
			
			private:
				ListenerMap		m_listenerMap;	
			public:
				InputSystem();
				~InputSystem();
				
				virtual void Update();
				void AddListener( SR::Input::InputListener* listener, char* key);		
		
			private:
				void Notify(const char* key);
			
		};
	}
}
#endif
