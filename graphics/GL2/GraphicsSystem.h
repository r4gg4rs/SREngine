#ifndef SR_GRAPHICS_GL2_GRAPHICSSYSTEM_H
#define SR_GRAPHICS_GL2_GRAPHICSSYSTEM_H

#include "../../framework/IVisitable.h"
#include "../../framework/ISystem.h"

#include "../Camera.h"
#include "GraphicsComponent.h"
#include <GL/gl.h>


namespace SR
{
	namespace Graphics
	{
		namespace GL2
		{
			class GraphicsSystem
			{
				private:
					Camera*		p_camera;
				public:
					GraphicsSystem() { }
					~GraphicsSystem() { }
							/**
					Update
					implement ISystem Update
				**/
				virtual void Update()
				{
					// TODO
				}
				
				/**
					Visit
					implement IVisitor Visit
				**/
				virtual void Visit( Entity* entity)
				{
					// TODO
					Component* component = entity->GetComponent("GraphicsComponent");
					GraphicsComponent* gcomp = static_cast<GraphicsComponent*> (component);
					Mesh* mesh = gcomp->GetMesh();
					
					Vertices vertices = mesh->GetVertices();
					
					glBegin(GL_TRIANGLE_STRIP);
					
					for(Vector3 vertex :  vertices)
					{
						glVertex3f( vertex.x, vertex.y, vertex.z);
					}
					
					glEnd();
					
				}
				
				
				void SetCamera(Camera* camera)
				{
					p_camera = camera;
				}	
			};
		}
	}
}

#endif
