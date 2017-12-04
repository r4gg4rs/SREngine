#ifndef SR_MATH_H
#define SR_MATH_H

#include <cmath>
#define _USE_MATH_DEFINES

namespace SR 
{
	class Math
	{
		float DegToRad(float deg)
		{
			return deg * M_PI / 180;
		}
		
		float RadToDeg(float rad	)
		{
			return rad * 180 /PI;
		}
	};
	
}
#endif
