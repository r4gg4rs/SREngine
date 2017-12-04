/**
   @author:	Jani Haippo
   @version:	28.02.2017	
**/

#ifndef SR_AABB_H
#define SR_AABB_H

#include "Vector3.h"

namespace SR
{
  class Box3
  {
  private:
    Vector3		m_min;
    Vector3		m_max;
  public:
    Box3(){ }
    ~Box3(){ }
			
    void Set(const Vector3& min, const Vector3& max)
    {
      m_min = min;
      m_max = max;
    }
			
    const Vector3& GetMin() const
    {
      return m_min;
    }
			
    const Vector3& GetMax() const
    {
      return m_max;
    }
			
    bool IsInside(const Vector3& point) const
    {
      if( point.x > m_max.x || point.x < m_min.x) return false;
      if( point.y > m_max.y || point.y < m_min.y) return false;
      if( point.z > m_max.z || point.z < m_min.z) return false;
      return true;			
    }
			
    bool Intersect( const Box3& box) const
    {
      Vector3 b_min = box.GetMin();
      Vector3 b_max = box.GetMax();
				
      if(b_min.x > m_max.x || b_max.x < m_min.x) return false;
      if(b_min.y > m_max.y || b_max.y < m_min.y) return false;
      if(b_min.z > m_max.z || b_max.z < m_min.z) return false;
      return true;
    }
  };
}
#endif
