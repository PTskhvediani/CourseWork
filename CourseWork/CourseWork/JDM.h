#pragma once

#include "Car.h"

class JDM : public Car {
private:
	int solo_drift_tournaments;
	int solo_drift_tournaments_won;
	int battle_drift_tournaments;
	int battle_drift_tournaments_won;
public:
	JDM();
	JDM(std::string, std::string, int, int, float, int, Color, std::vector<std::string>, WheelDrive, int, int, int, int, int);

	int GetSoloDriftTournaments();
	int GetSoloDriftTournamentsWon();
	int GetBattleDriftTournaments();
	int GetBattleDriftTournamentsWon();

	void SetSoloDriftTournaments(int);
	void SetSoloDriftTournamentsWon(int);
	void SetBattleDriftTournaments(int);
	void SetBattleDriftTournamentsWon(int);

	void NewSoloDriftTournament();
	void SoloDriftTournamentWon();
	void NewBattleDriftTournament();
	void BattleDriftTournamentWon();


	float CalculateSuccessRate() const override;
};