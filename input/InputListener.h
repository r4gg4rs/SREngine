/**
	@author		Jani Haippo
	@versio		18.10.2017
	
	InputListener class 
	listen to input
**/

#ifndef SR_INPUT_INPUTLISTENER_H
#define SR_INPUT_INPUTLISTENER_H

namespace SR
{
	namespace Input
	{
		class InputListener
		{
			public:
				virtual void Notify(const char* key)=0;
		};
	}
}

#endif
