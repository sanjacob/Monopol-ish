// Jacob Sánchez Pérez

/** @file
 * @author Jacob Sánchez Pérez <jsanchez-perez@uclan.ac.uk>
 */

#ifndef MP_PIECE_H
#define MP_PIECE_H

#include <iostream>

namespace mp
{
	/**
	 * @brief All the available playing pieces in the game.
	 */
	enum class EPiece
	{
		hamster,
		pumpkin,
		dog,
		jaguar,
		none
	};

	std::ostream& operator << (std::ostream& outputStream, const EPiece piece);
}

#endif
