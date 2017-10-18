#ifndef SR_PHYSICS_BODYCOMPONENT_H
#define SR_PHYSICS_BODYCOMPONENT_H

#include "../core/Component.h"
#include "../math/Vector3.h"

namespace SR
{
	namespace Physics
	{
		class Body
		{
			private:
				float		m_inverseMass;
			
				Vector3		m_acceleration;
				Vector3		m_velocity;
				Vector3		m_force;
			public:
				Body() { }
				~Body() { }
				
				void SetInverseMass( float inverseMass)
				{
					m_inverseMass = inverseMass;
				}
				
				void SetMass( float mass )
				{
					m_inverseMass = 1 / mass;
				}
				
				float GetMass() const
				{
					return 1/ m_inverseMass;
				}
				
				float GetInverseMass() const
				{
					return m_inverseMass;
				}
				
				void SetAcceleration( const Vector3& acceleration)
				{
					m_acceleration = acceleration;
				}		
				
				const Vector3& GetAcceleration() const
				{
					return m_acceleration;
				}
				
				void SetVelocity( const Vector3& velocity)
				{
					m_velocity = velocity;
				}
				
				const Vector3& GetVelocity() const 
				{
					return m_velocity;
				}
				
				void SetForce( const Vector3& force)
				{
					m_force = force;
				}
				
				void AddForce( const Vector3& force)
				{
					m_force += force;
				}
				
				const Vector3& GetForce() const
				{
					return m_force;
				}
		};
	}	
}	
#endif
