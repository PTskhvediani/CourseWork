#pragma once

#include "Color.h"
#include "WheelDrive.h"
#include <string>
#include <vector>


class Car {
private:
	std::string manufacturer;
	std::string model;
	int manufactured_year;
	int door_number;
	float engine_size;
	int horse_power;
	Color color;
	std::vector<std::string> holders;
	WheelDrive wheel_drive;
	int torque;

public:
	Car();
	Car(std::string, std::string, int, int, float, int, Color, std::vector<std::string>, WheelDrive, int);

	std::string GetManufacturer();
	std::string GetModel();
	int GetManufacturedYear();
	int GetDoorNumber();
	float GetEngineSize();
	int GetHorsePower();
	Color GetColor();
	std::vector<std::string> GetHolders();
	WheelDrive GetWheelDrive();
	int GetTorque();

	void SetManufacturer(std::string);
	void SetModel(std::string);
	void SetManufacturedYear(int);
	void SetDoorNumber(int);
	void SetEngineSize(float);
	void SetHorsePower(int);
	void SetColor(Color);
	void SetHolders(std::vector<std::string>);
	void SetWheelDrive(WheelDrive);
	void SetTorque(int);

	virtual float CalculateSuccessRate() const = 0;

	bool operator>(const Car&) const;
	bool operator<(const Car&) const;
};