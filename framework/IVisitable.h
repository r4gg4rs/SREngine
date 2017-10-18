#ifndef SR_IVISITABLE_H
#define SR_IVISITABLE_H

namespace SR
{
	class IVistable
	{
		public:
			virtual ~IVisitable() { }
			virtual void Accept(IVistior* visitor)=0;
			
	};
}
#endif
