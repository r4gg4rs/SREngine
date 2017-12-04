#ifndef SR_INPUT_MOUSELISTENER_H
#define SR_INPUT_MOUSELISTENER_H

namespace SR
{
	namespace Input
	{
		class MouseListener
		{
			public:
				virtual void Notify(int x, int y, int button)=0;
		};
	}
}
#endif

