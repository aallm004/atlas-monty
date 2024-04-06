#include "monty.h"
/**
 * isnumber - is it a number
 * @ptr: point
 *
 * Return: 0 if not num 1 if num
 */

int isnumber(char *ptr)
{
	while (*ptr)
	{
		if (!isdigit(*ptr))
			return (0);
		ptr++;
	}
	return (1);
}
