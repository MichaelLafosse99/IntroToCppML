#include "Car.h"

void Car::Drive()
{

}

void Car::Move()
{
	Drive();
}

Car::Car()
{
	mSpeed = 20;
	mWheels = 4;
}
