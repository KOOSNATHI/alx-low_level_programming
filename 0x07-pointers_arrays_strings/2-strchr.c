#include "main.h"

/**
 *_strchr - Returns a pointer to the first occurance
 *of the character c in the string s, or NULL if the character is not found
 *
 *@s: String targeted
 *@c: Character is targeted
 *
 *Return: Return pointers to first occurance of c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
