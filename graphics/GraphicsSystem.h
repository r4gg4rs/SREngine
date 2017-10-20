/**
	@author		Jani Haippo
	@version	18.10.2017
	
	Graphics system
**/

#ifndef SR_GRAPHICS_GRAPHICSSYSTEM_H
#define SR_GRAPHICS_GRAPHICSSYSTEM_H

#include "../framework/ISystem.h"
#include "../framework/IVisitor.h"
#include "../framework/IRenderer.h"

#include "Camera.h"



namespace SR
{
	namespace Graphics
	{
		class GraphicsSystem : public ISystem, public IVisitor
		{
			private:
				Camera*		p_camera;
				IRenderer*	p_renderer;
				IWindow*	p_window;
			public:
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
				}
				
				
				void SetCamera(Camera* camera)
				{
					p_camera = camera;
				}
				
				void SetRenderer(IRenderer* renderer)
				{
					p_renderer = renderer;
				}
				
				void SetWindow(IWindow* window)
				{
					p_window = window;
				}
		};
	}
}

#endif
