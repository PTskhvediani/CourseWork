#include "JDM.h"


JDM::JDM() : Car(), solo_drift_tournaments(0), solo_drift_tournaments_won(0), battle_drift_tournaments(0), battle_drift_tournaments_won(0) {}

JDM::JDM(std::string manufacturer, std::string model, int manufactured_year, int door_number, float engine_size, int horse_power, Color color, std::vector<std::string> holders, WheelDrive wheel_drive, int torque, int solo_drift_tournaments, int solo_drift_tournaments_won, int battle_drift_tournaments, int battle_drift_tournaments_won)
	: Car(manufacturer, model, manufactured_year, door_number, engine_size, horse_power, color, holders, wheel_drive, torque)
{
	this->solo_drift_tournaments = solo_drift_tournaments;
	this->solo_drift_tournaments_won = solo_drift_tournaments_won;
	this->battle_drift_tournaments = battle_drift_tournaments;
	this->battle_drift_tournaments_won = battle_drift_tournaments_won;
}


int JDM::GetSoloDriftTournaments() {
	return solo_drift_tournaments;
}
int JDM::GetSoloDriftTournamentsWon() {
	return solo_drift_tournaments_won;
}
int JDM::GetBattleDriftTournaments() {
	return battle_drift_tournaments;
}
int JDM::GetBattleDriftTournamentsWon() {
	return battle_drift_tournaments_won;
}


void JDM::SetSoloDriftTournaments(int soloDriftTournaments) {
	solo_drift_tournaments = soloDriftTournaments;
}
void JDM::SetSoloDriftTournamentsWon(int soloDriftTournamentsWon) {
	solo_drift_tournaments_won = soloDriftTournamentsWon;
}
void JDM::SetBattleDriftTournaments(int battleDriftTournaments) {
	battle_drift_tournaments = battleDriftTournaments;
}
void JDM::SetBattleDriftTournamentsWon(int battleDriftTournamentsWon) {
	battle_drift_tournaments_won = battleDriftTournamentsWon;
}


void JDM::NewSoloDriftTournament() {
	solo_drift_tournaments++;
}
void JDM::SoloDriftTournamentWon() {
	solo_drift_tournaments_won++;
}
void JDM::NewBattleDriftTournament() {
	battle_drift_tournaments++;
}
void JDM::BattleDriftTournamentWon() {
	battle_drift_tournaments_won++;
}


float JDM::CalculateSuccessRate() const {
	if (solo_drift_tournaments == 0 || battle_drift_tournaments == 0)
		return 0;
	return ((float)solo_drift_tournaments_won / solo_drift_tournaments + (float)battle_drift_tournaments_won / battle_drift_tournaments) / 2;
}