#include "main.h"

/**
 * _isupper check if character is upper case or lowercase
 *
 *
 */

int main(void)
{
	char ch;

	ch = "A";

	if (isupper(ch))
	{
		printf(" is uppercase chatacter");
	}
	else if (islower(ch))
	{
		printf(" is lowercase character");
	}
	else
	{
		pritf(" is not an character.");
	}

	return (0);
}
