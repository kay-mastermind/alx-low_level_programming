#include "main.h"

/**
 * 6-abs.c - funtion to find absolute value of a number
 * @a: function parameter
 * Returns: -a or a
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
