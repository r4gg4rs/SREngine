#ifndef SR_GL2_RENDERINGMANAGER_H
#define SR_GL2_RENDERINGMANAGER_H

#include "../../utils/singleton.h"

namespace SR
{
	namespace GL2
	{
		class RenderingManager : public Singleton<RenderingManager>
		{
			private:
			
			public:
				RenderingManager() { }
				~RenderingManager() { }
				
				void AddMesh(Mesh* mesh)
				{
				
				}
		};
	}
}
#endif
