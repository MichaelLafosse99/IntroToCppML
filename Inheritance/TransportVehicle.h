#include <iostream>

class TransportVehicle
{
protected:
	int mSpeed;

public:
	int mWheels;
	virtual void Move() = 0;
};