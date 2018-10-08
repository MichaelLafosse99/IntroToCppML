#include "Bike.h"

void Bike::Pedal()
{

}

void Bike::Move()
{
	Pedal();
}

Bike::Bike()
{
	mSpeed = 5;
	mWheels = 2;
}