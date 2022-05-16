#pragma once

#include "Car.h"
#include <vector>

class CarConsole {
private:
	std::vector<Car*> cars;
public:
	void Create();
	void PrintAll();
	void Update();
	void Delete();

	~CarConsole();
};