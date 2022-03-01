// Jacob Sánchez Pérez

/** @file
 * @author Jacob Sánchez Pérez <jsanchez-perez@uclan.ac.uk>
 */

#include <iostream>
#include "CGoToJailSquare.h"

using namespace std;
using namespace mp;

CGoToJailSquare::CGoToJailSquare(string name): CSquare(name, ESquareType::GoToJail)
{
}


void CGoToJailSquare::PlayerLands(IPlayer& player, PlayerMap& players, CBank& bank, ostream& outputStream)
{
	outputStream << player << " goes to Jail" << endl;
	outputStream << player << " pays £" << JAIL_PENALTY << endl;
	bank.Deposit(player.Pay(JAIL_PENALTY));
	player.SetPosition(ESquareType::Jail);
}
