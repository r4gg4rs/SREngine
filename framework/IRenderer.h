#ifndef SR_IRENDERER_H
#define SR_IRENDERER_H

#include "../graphics/Mesh.h"

namespace SR
{
	class IRenderer
	{
		public:
			virtual void Render( Mesh* mesh )=0;
	};
}
#endif
