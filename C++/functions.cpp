#include "functions.hpp" //H_FUNCTIONS_

long absolute(long& a)
{
	if (a < 0)
	{
		a = -a; //negative of a negative is a positive
		return a;
	}

	return a; //function returns @param a
}