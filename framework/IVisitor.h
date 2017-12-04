#ifndef SR_IVISITOR_H
#define SR_IVISITOR_H

//#include "IVisitable.h"

namespace SR
{
	class Entity;
	class IVisitor
	{
		public:
			~IVisitor() { }
			virtual void Visit(Entity* entity)=0;
	//		virtual void Visit(IVisitabke* visitable)=0;
	};
}
#endif
