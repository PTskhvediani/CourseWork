#pragma once

#include "Car.h"

class MuscleCar : public Car {
private:
	int drag_races;
	int drag_races_won;
	int quarter_mile_time;

public:
	MuscleCar();
	MuscleCar(std::string, std::string, int, int, float, int, Color, std::vector<std::string>, WheelDrive, int, int, int, int);

	int GetDragRaces();
	int GetDragRacesWon();
	int GetQuarterMileTime();

	void SetDragRaces(int);
	void SetDragRacesWon(int);
	void SetQuarterMileTime(int);

	void NewDragRace();
	void DrageRaceWon();

	bool operator>(const MuscleCar&) const;

	float CalculateSuccessRate() const override;
};