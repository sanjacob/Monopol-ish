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
	class CProperty : CSquare
	{
	public:
		CProperty();
	protected:
		float mCost;
		float mRent;
	};
}

#endif
