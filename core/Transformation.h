#ifndef SR_TRANSFORMATION_H
#define SR_TRANSFORMATION_H

#include "Component.h"
namespace SR
{
	class Transformation : public Component
	{
		private:
			Vector3		m_position;
			Quaternion	m_rotation;
			Matrix4		m_modelMatrix;
			bool			m_matrixNeedsToUpdate;
		public:
			Transformation();
			~Transformation();
			
			void SetPosition( const Vector3& position)
			{
				m_position = position;
				m_matrixNeedsToUpdate = true;
			}
			
			Vector3& GetPosition()
			{
				return m_position;
			}
			
			Vector3& GetWorldPosition()
			{
				Entity* owner = NULL;
				owner = GetOwner(); 
				if(!owner) return m_position;
				Entity* ent = owner->GetParent();
				while(ent)
				{
					ent = 
				}
				
				
			}
			
			void SetRotation( const Quaternion& rotation)
			{
				m_rotation = rotation;
				m_matrixNeedsToUpdate = true;
			}
			
			Matrix4 GetModelMatrix()
			{
				if( m_marixNeedsToUpdate) UpdateMatrix();
				return m_modelMatrix;
			}
		private:
			void UpdateMatrix()
			{
			
			}
	};
}
#endif
