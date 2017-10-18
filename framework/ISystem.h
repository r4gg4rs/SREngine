#ifndef SR_ISYSTEM_H
#define SR_ISYSTEM_H


namespace SR
{
	class ISystem
	{
		virtual ~ISystem() { }
		virtual void Update()=0;
	};
}
#endif

