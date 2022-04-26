#include "main.h"
/**
 * set_string - set the value of a pointer to a character
 * @s: the pointr to change
 * @to: the value to change the pointer to
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
