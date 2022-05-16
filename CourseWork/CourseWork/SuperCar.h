#pragma once

#include "Car.h"

class SuperCar : public Car {
private:
	int last_auction_price;
	int auctions_number;
	int street_races_participated;
	int street_races_won;

public:
	SuperCar();
	SuperCar(std::string, std::string, int, int, float, int, Color, std::vector<std::string>, WheelDrive, int, int, int, int, int);

	int GetLastAuctionPrice();
	int GetAuctionsNumber();
	int GetStreetRacesParticipated();
	int GetStreetRacesWon();

	void SetLastAuctionPrice(int);
	void SetAuctionsNumber(int);
	void SetStreetRacesParticipated(int);
	void SetStreetRacesWon(int);

	void NewAuction();
	void NewStreetRace();
	void StreetRaceWon();

	float CalculateSuccessRate() const override;
};