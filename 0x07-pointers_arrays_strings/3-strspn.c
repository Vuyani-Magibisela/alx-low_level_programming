#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: character to print
 * @accept: character
 * Return: i.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
			j++;
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}
