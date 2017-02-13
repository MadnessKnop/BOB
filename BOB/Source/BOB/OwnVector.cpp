

#include "BOB.h"
#include "OwnVector.h"


OwnVector::OwnVector()
{
	x = 0;
	y = 0;
	z = 0;
}

OwnVector::~OwnVector()
{
}

OwnVector::OwnVector(float xi, float yi, float zi)
{
	x = xi;
	y = yi;
	z = zi;
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
	return OwnVector();
}

