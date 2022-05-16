#include "Car.h"


Car::Car() {
	manufacturer = "";
	model = "";
	manufactured_year = 0;
	door_number = 0;
	engine_size = 0;
	horse_power = 0;
	color = Color::Black;
	holders = std::vector<std::string>();
	wheel_drive = WheelDrive::FrontWheel;
	torque = 0;
}

Car::Car(std::string manufacturer, std::string model, int manufactured_year, int door_number, float engine_size, int horse_power, Color color, std::vector<std::string> holders, WheelDrive wheel_drive, int torque) {
	this->manufacturer = manufacturer;
	this->model = model;
	this->manufactured_year = manufactured_year;
	this->door_number = door_number;
	this->engine_size = engine_size;
	this->horse_power = horse_power;
	this->color = color;
	this->holders = holders;
	this->wheel_drive = wheel_drive;
	this->torque = torque;
}


std::string Car::GetManufacturer() {
	return manufacturer;
}

std::string Car::GetModel() {
	return model;
}

int Car::GetManufacturedYear() {
	return manufactured_year;
}

int Car::GetDoorNumber() {
	return door_number;
}

float Car::GetEngineSize() {
	return engine_size;
}

int Car::GetHorsePower() {
	return horse_power;
}

Color Car::GetColor() {
	return color;
}

std::vector<std::string> Car::GetHolders() {
	return holders;
}

WheelDrive Car::GetWheelDrive() {
	return wheel_drive;
}

int Car::GetTorque() {
	return torque;
}

void Car::SetManufacturer(std::string manu) {
	manufacturer = manu;
}

void Car::SetModel(std::string mod) {
	model = mod;
}

void Car::SetManufacturedYear(int manuy) {
	manufactured_year = manuy;
}

void Car::SetDoorNumber(int doorNum) {
	door_number = doorNum;
}

void Car::SetEngineSize(float EngSize) {
	engine_size = EngSize;
}

void Car::SetHorsePower(int horseP) {
	horse_power = horseP;
}

void Car::SetColor(Color col) {
	color = col;
}

void Car::SetHolders(std::vector<std::string> holder) {
	holders = holder;
}

void Car::SetWheelDrive(WheelDrive WD) {
	wheel_drive = WD;
}

void Car::SetTorque(int tor) {
	torque = tor;
}

bool Car::operator > (Car const& obj) const {
	if (CalculateSuccessRate() > obj.CalculateSuccessRate())
		return true;
	return false;
}

bool Car::operator < (Car const& obj) const {
	if (CalculateSuccessRate() < obj.CalculateSuccessRate())
		return true;
	return false;
}