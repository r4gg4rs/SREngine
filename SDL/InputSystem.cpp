#include "InputSystem.h"

using namespace SR;
using namespace SDL;

InputSystem::InputSystem()
{

}

InputSystem::~InputSystem()
{

}

void InputSystem::Update()
{
	SDL_Event event;
	
	while(SDL_PollEvent(&event) !=0 )
	{
		if(event.type ==SDL_QUIT)
		{

//			CoreGame::GetSingleton().Stop();		
		}
		if(event.type == SDL_KEYDOWN)
		{
			const char* key = SDL_GetKeyName(event.key.keysym.sym);
	//		Notify( key);
		}
	}
}

void InputSystem::AddListener( SR::Input::InputListener* listener, char* key)
{
	m_listenerMap[key].push_back(listener);
}

void InputSystem::Notify( const char* key)
{

	for( int i=0; i< m_listenerMap[key].size(); i++ )
	{
		m_listenerMap[key][i]->Notify(key);
	}
	/*
	for(SR::Input::InputListener il : m_listenerMap[key])
	{
		il->Notify(key);
	}
	*/
/*
	for(InputListener il : m_listenerMap[key] )
	{
		//il->Notify(key);
	}
	*/
}


