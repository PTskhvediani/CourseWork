#include "SuperCar.h"


SuperCar::SuperCar() : Car(), last_auction_price(0), auctions_number(0), street_races_participated(0), street_races_won(0) {}

SuperCar::SuperCar(std::string manufacturer, std::string model, int manufactured_year, int door_number, float engine_size, int horse_power, Color color, std::vector<std::string> holders, WheelDrive wheel_drive, int torque, int last_auction_price, int auctions_number, int street_races_participated, int street_races_won)
	: Car(manufacturer, model, manufactured_year, door_number, engine_size, horse_power, color, holders, wheel_drive, torque)
{
	this->last_auction_price = last_auction_price;
	this->auctions_number = auctions_number;
	this->street_races_participated = street_races_participated;
	this->street_races_won = street_races_won;
}


int SuperCar::GetLastAuctionPrice() {
	return last_auction_price;
}
int SuperCar::GetAuctionsNumber() {
	return auctions_number;
}
int SuperCar::GetStreetRacesParticipated() {
	return street_races_participated;
}
int SuperCar::GetStreetRacesWon() {
	return street_races_won;
}


void SuperCar::SetLastAuctionPrice(int lastAuction) {
	last_auction_price = lastAuction;
}
void SuperCar::SetAuctionsNumber(int auctionNum) {
	auctions_number = auctionNum;
}
void SuperCar::SetStreetRacesParticipated(int participated) {
	street_races_participated = participated;
}
void SuperCar::SetStreetRacesWon(int won) {
	street_races_won = won;
}


void SuperCar::NewAuction() {
	auctions_number++;
}
void SuperCar::NewStreetRace() {
	street_races_participated++;
}
void SuperCar::StreetRaceWon() {
	street_races_won++;
}


float SuperCar::CalculateSuccessRate() const {
	if (street_races_participated == 0)
		return 0;
	return (float)street_races_won / street_races_participated;
}