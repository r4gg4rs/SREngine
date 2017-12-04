/**
	@author Jani Haippo
	@version 18.10.2017
	
	Camera
**/

#ifndef SR_GRAPHICS_CAMERA_H
#define SR_GRAPHICS_CAMERA_H

#include "../math/Vector3.h"
#include "../math/Matrix4.h"

namespace SR
{
	namespace Graphics
	{
		class Camera
		{
			private:
				Vector3		m_position;
				Vector3		m_target;
				Vector3		m_up;
				
				float		m_nearPlane;
				float		m_farPlane;
				float		m_aspectRation;
				float		m_viewOfField;
			
				Matrix4		m_projectionMatrix;
				Matrix4		m_viewMatrix;
				
				bool		m_matrixNeedsToUpdate;
			public:
				Camera() { }
				~Camera() { }
				
				const Matrix4& GetProjectionMatrix() const
				{
					if( m_matrixNeedsToUpdate) Update();
					return m_projectionMatrix;
				}
				
				const Matrix4& GetViewMatrix() const
				{
					if(m_matrixNeedsToUpdate) Update();
					return m_viewMatrix;
				}
				
				void Update()
				{
					// TODO
				}
		};
	}
}

#endif
