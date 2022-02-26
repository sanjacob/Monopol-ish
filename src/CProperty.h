// Jacob Sánchez Pérez

/** @file
 * @author Jacob Sánchez Pérez <jsanchez-perez@uclan.ac.uk>
 */

#ifndef MP_PROPERTY_H
#define MP_PROPERTY_H

#include "CSquare.h"

namespace mp
{
	/**
	 * @brief Type of CSquare that represents an ownable property.
	 */
	class CProperty : public CSquare
	{
	public:
		enum class EColour
		{
			Red = 0,
			Grey = 1,
			Brown = 2,
			Orange = 3,
			Yellow = 4,
			Green = 5,
			Blue = 6,
			Purple = 7
		};

		CProperty(std::string name, float cost, float rent, EColour colourGroup);
		virtual void PlayerLands(CPlayer& player, std::ostream& outputStream);
	protected:
		float mCost;
		float mRent;
		EColour mColour;
	};
}

#endif
