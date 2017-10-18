#ifndef SR_IVISITABLE_H
#define SR_IVISITABLE_H


namespace SR
{
	class IVistable
	{
		public:
			virtual ~IVistable() { }
			virtual void Accept(IVistor* visitor)=0;
			
	};
}
#endif
