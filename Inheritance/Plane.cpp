#include "Plane.h"

void Plane::Fly()
{

}

void Plane::Move()
{
	Fly();
}

Plane::Plane()
{
	mSpeed = 200;
	mWheels = 3;
}