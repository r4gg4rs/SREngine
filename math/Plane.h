#ifndef SR_PLANE_H
#define SR_PLANE_H

namespace SR
{
  class Plane
  {
  
    private:
      Vector3  m_normal;
      float    m_d;
    public:
      Plane();
      ~Plane();
      void Set(const Vector3& point1, const Vector3& point2, const Vector3& point3);
  };
}

#endif