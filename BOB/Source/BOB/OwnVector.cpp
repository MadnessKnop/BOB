

#include "BOB.h"
#include "OwnVector.h"


OwnVector::OwnVector(void)
{
	x = 0;
	y = 0;
	z = 0;
}

//Weil kein Objekt von der Klasse ersttellt wird, wird auch kein Destructor benötigt
//OwnVector::~OwnVector()
//{
//}

OwnVector::OwnVector(float xi, float yi, float zi)
{
	x = xi;
	y = yi;
	z = zi;
}
OwnVector & OwnVector::ConvertToOwnVector(FVector vec)
{
	x = vec.X;
	y = vec.Y;
	z = vec.Z;
	return *this;
	// TODO: insert return statement here
}
const OwnVector OwnVector::UpVector(float xi, float yi, float zi)
{
	x = 0;
	y = 0;
	z = 1;
	return OwnVector(x, y, z);
}

const OwnVector OwnVector::ForwardVector(float xi, float yi, float zi)
{
	x = 1;
	y = 0;
	z = 0;
	return OwnVector(x, y, z);
}

const OwnVector OwnVector::RightVector(float xi, float yi, float zi)
{
	x = 0;
	y = 1;
	z = 0;
	return OwnVector(x, y, z);
}

 const OwnVector OwnVector::ZeroVector(float xi, float yi, float zi) 
{
	x = 0;
	y = 0;
	z = 0;
	return OwnVector(x, y, z);
}

bool OwnVector::IsZero() const
{
	return x == 0.f && y == 0.f && z == 0.f;
}

OwnVector OwnVector::GetSafeNormal(float Tolerance) const
{
	const float SquareSum = x*x + y*y + z*z;

	if (SquareSum == 1.f)
	{
		return *this;
	}
	else if (SquareSum < Tolerance)
	{
		return OwnVector::ZeroVector(x,y,z);
	}
	const float Scale = FMath::InvSqrt(SquareSum);
	return OwnVector(x * Scale, y * Scale, z * Scale);
}

OwnVector OwnVector::SafeNormal(float Tolerance) const
{
	return GetSafeNormal(Tolerance);
}

