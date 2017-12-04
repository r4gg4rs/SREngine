#ifndef SR_GRAPHICS_GL2_H
#define SR_GRAPHICS_GL2_H

#include "../../core/Component.h"

namespace SR
{
	namespace Graphics
	{
		namespace GL2
		{
			class GraphicsComponent : public Component
			{
				private:
					Mesh* 	p_mesh;
				public:
					GraphicsComponent() { }
					~GraphicsComponent() { }
					
					void SetMesh(Mesh* mesh)
					{
						p_mesh = mesh;
					}
					
					Mesh* GetMesh() 
					{
						return p_mesh;
					}
			};
		}
	}
}
#endif
