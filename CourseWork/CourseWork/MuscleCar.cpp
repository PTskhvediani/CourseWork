#include "MuscleCar.h"


MuscleCar::MuscleCar() : Car(), drag_races(0), drag_races_won(0), quarter_mile_time(0) {}

MuscleCar::MuscleCar(std::string manufacturer, std::string model, int manufactured_year, int door_number, float engine_size, int horse_power, Color color, std::vector<std::string> holders, WheelDrive wheel_drive, int torque, int drag_races, int drag_races_won, int quarter_mile_time)
	: Car(manufacturer, model, manufactured_year, door_number, engine_size, horse_power, color, holders, wheel_drive, torque)
{
	this->drag_races = drag_races;
	this->drag_races_won = drag_races_won;
	this->quarter_mile_time = quarter_mile_time;
}


int MuscleCar::GetDragRaces() {
	return drag_races;
}
int MuscleCar::GetDragRacesWon() {
	return drag_races_won;
}
int MuscleCar::GetQuarterMileTime() {
	return quarter_mile_time;
}


void MuscleCar::SetDragRaces(int drag_races) {
	drag_races = drag_races;
}
void MuscleCar::SetDragRacesWon(int drag_races_won) {
	drag_races_won = drag_races_won;
}
void MuscleCar::SetQuarterMileTime(int quarter_mile_time) {
	quarter_mile_time = quarter_mile_time;
}


void MuscleCar::NewDragRace() {
	drag_races++;
}
void MuscleCar::DrageRaceWon() {
	drag_races_won++;
}


bool MuscleCar::operator > (MuscleCar const& obj) const {
	if (obj.quarter_mile_time > obj.quarter_mile_time)
		return true;
	return false;
}



float MuscleCar::CalculateSuccessRate() const {
	if (drag_races == 0)
		return 0;
	return (float)drag_races_won / drag_races;
}