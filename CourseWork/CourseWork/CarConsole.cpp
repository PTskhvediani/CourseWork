#include "CarConsole.h"
#include "MuscleCar.h"
#include "SuperCar.h"
#include "JDM.h"
#include <iostream>

void CarConsole::Create() {
	std::string manufacturer, model;
	int manufactured_year, door_number, horse_power, torque, holdernum, colorNum, wheel_drive_num;
	float engine_size;
	std::vector<std::string> holders;
	Color color = Color::Black;
	WheelDrive wheel_drive = WheelDrive::FrontWheel;

	std::cout << "Input manufacturer \n";
	std::cin >> manufacturer;

	std::cout << "Input model \n";
	std::cin >> model;

	std::cout << "Input manufactured year \n";
	std::cin >> manufactured_year;

	std::cout << "Input door number \n";
	std::cin >> door_number;

	std::cout << "Input Horse Power \n";
	std::cin >> horse_power;

	std::cout << "Input torque \n";
	std::cin >> torque;

	std::cout << "Input engine size \n";
	std::cin >> engine_size;

	std::cout << "Input number of holders \n";
	std::cin >> holdernum;

	for (int i = 0; i < holdernum; i++) {
		std::string holder;
		std::cin >> holder;
		holders.push_back(holder);
	}

	std::cout << "Choose Color: \n 1. Black \n 2. White \n 3. Gray \n";
	std::cin >> colorNum;

	switch (colorNum) {
	case 1:
		color = Color::Black;
		break;
	case 2:
		color = Color::White;
		break;
	case 3:
		color = Color::Gray;
		break;
	default:
		std::cout << "Invalid Color Number";
	}

	std::cout << "Choose Wheel Drive: \n 1. FrontWheel \n 2. RearWheel \n 3. AllWeel  \n";
	std::cin >> wheel_drive_num;

	switch (wheel_drive_num) {
	case 1:
		wheel_drive = WheelDrive::FrontWheel;
		break;
	case 2:
		wheel_drive = WheelDrive::RearWheel;
		break;
	case 3:
		wheel_drive = WheelDrive::AllWeel;
		break;
	default:
		std::cout << "Invalid wheel drive Number";
	}

	std::cout << "Choose Car Type: \n 1. Muscle Car \n 2. Super Car \n 3. JDM \n";
	int CarType;
	std::cin >> CarType;

	switch (CarType) {
	case 1:
		cars.push_back(new MuscleCar(manufacturer, model, manufactured_year, door_number, engine_size, horse_power, color, holders, wheel_drive, torque, 0, 0 ,0));
		break;
	case 2:
		cars.push_back(new SuperCar(manufacturer, model, manufactured_year, door_number, engine_size, horse_power, color, holders, wheel_drive, torque, 0, 0, 0, 0));
		break;
	case 3:
		cars.push_back(new JDM(manufacturer, model, manufactured_year, door_number, engine_size, horse_power, color, holders, wheel_drive, torque, 0, 0, 0, 0));
		break;
	default:
		std::cout<< "Invalid Request";
		break;
	}
}


void CarConsole::PrintAll() {
	for (int i = 0; i < cars.size(); i++) {
		std::cout << "Car - " << cars[i]->GetManufacturer() << " " << cars[i]->GetModel() << " " << cars[i]->GetManufacturedYear() << std::endl;
		std::cout << "Number of Doors - " << cars[i]->GetDoorNumber() << std::endl;
		std::cout << "Engine Size - " << cars[i]->GetEngineSize() << std::endl;
		std::cout << "Horse Power - " << cars[i]->GetHorsePower() << std::endl;
		std::cout << "Color: ";
		switch (cars[i]->GetColor()) {
		case Color::Black: std::cout << "Black" << std::endl; break;
		case Color::White: std::cout << "White" << std::endl; break;
		case Color::Gray: std::cout << "Gray" << std::endl; break;
		}
		std::cout << "Car Holders: \n";
		for (int j = 0; j < cars[i]->GetHolders().size(); j++) {
			std::cout << "(" << i + 1 << ") " << cars[i]->GetHolders()[j] << std::endl;
		}
		std::cout << "Torque - " << cars[i]->GetTorque() << std::endl;
	}
}


void CarConsole::Update() {
	int ind;
	std::cout << "Input Car Index You Want to Edit:\n";
	std::cin >> ind;
	ind--;

	if (ind >= 0 && ind < cars.size()) {
		std::cout << "Choose An action: \n";
		std::cout << "(1) SetManufacturer \n";
		std::cout << "(2) SetModel \n";
		std::cout << "(3) SetManufacturedYear \n";
		std::cout << "(4) SetDoorNumber \n";
		std::cout << "(5) SetEngineSize \n";
		std::cout << "(6) SetHorsePower \n";
		std::cout << "(7) SetColor \n";
		std::cout << "(8) SetHolders \n";
		std::cout << "(9) SetWheelDrive \n";
		std::cout << "(10) SetTorque \n";

		int option;
		std::cin >> option;

		if (option == 1) {
			std::cout << "Input manufacturer \n";
			std::string manufacturer;
			std::cin >> manufacturer;
			cars[ind]->SetManufacturer(manufacturer);
		}
		else if (option == 2) {
			std::cout << "Input model: \n";
			std::string model;
			std::cin >> model;
			cars[ind]->SetModel(model);
		}
		else if (option == 3) {
			std::cout << "Input manufacturer year: \n";
			int manuYear;
			std::cin >> manuYear;
			cars[ind]->SetManufacturedYear(manuYear);
		}
		else if (option == 4) {
			std::cout << "Input Door Number: \n";
			int DoorNum;
			std::cin >> DoorNum;
			cars[ind]->SetDoorNumber(DoorNum);
		}
		else if (option == 5) {
			std::cout << "Input Engine Size: \n";
			float engSize;
			std::cin >> engSize;
			cars[ind]->SetEngineSize(engSize);
		}
		else if (option == 6) {
			std::cout << "Input Horse Power: \n";
			int horsePower;
			std::cin >> horsePower;
			cars[ind]->SetHorsePower(horsePower);
		}
		else if (option == 7) {
			int colorNum;
			Color color;
			std::cout << "Choose Color: \n 1. Black \n 2. White \n 3. Gray \n";
			std::cin >> colorNum;

			switch (colorNum) {
			case 1:
				color = Color::Black;
				break;
			case 2:
				color = Color::White;
				break;
			case 3:
				color = Color::Gray;
				break;
			default:
				std::cout << "Invalid Color Number";
				return;
				break;
			}
			cars[ind]->SetColor(color);
		}
		else if (option == 8) {
			int holdernum;
			std::vector<std::string> holders;
			std::cout << "Input number of holders \n";
			std::cin >> holdernum;

			for (int i = 0; i < holdernum; i++) {
				std::string holder;
				std::cin >> holder;
				holders.push_back(holder);
			}
			cars[ind]->SetHolders(holders);
		}
		else if (option == 9) {
			int wheel_drive_num;
			WheelDrive wheel_drive;
			std::cout << "Choose Wheel Drive: \n 1. Black \n 2. White \n 3. Gray \n";
			std::cin >> wheel_drive_num;

			switch (wheel_drive_num) {
			case 1:
				wheel_drive = WheelDrive::FrontWheel;
				break;
			case 2:
				wheel_drive = WheelDrive::RearWheel;
				break;
			case 3:
				wheel_drive = WheelDrive::AllWeel;
				break;
			default:
				std::cout << "Invalid wheel drive Number";
				return;
				break;
			}
			cars[ind]->SetWheelDrive(wheel_drive);
		}
		else if (option == 10) {
			std::cout << "Input torque: \n";
			int torque;
			std::cin >> torque;
			cars[ind]->SetTorque(torque);
		}
	}
	else
		std::cout << "Index out of range \n";
}

void CarConsole::Delete() {
	int ind;
	std::cout << "Input Car Index You Want to Delete: \n";
	std::cin >> ind;

	if (ind > 0 && ind <= cars.size()) {
		delete cars[ind - 1];
		cars.erase(cars.begin() + ind - 1);
		std::cout << "Car Deleted Succesfully \n";
	}
	else
		std::cout << "Index out of range\n";
}

CarConsole::~CarConsole() {
	for (auto car : cars)
		delete car;
	cars.clear();
}