#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: A pointer to a pointer to a char (double pointer).
 * @to: A pointer to a char (string) to set the value of `s` to.
 *
 * Description: This function takes a double pointer `s` and assigns
 * the address of the string pointed to by `to` to it.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
