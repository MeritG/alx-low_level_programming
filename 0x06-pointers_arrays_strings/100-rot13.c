#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: encoded string
 *
 * Return: string
 */

char *rot13(char *s)
{
	int h, p;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZBCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (h = 0; s[h] != '\0'; h++)
	{
		for (p = 0; a[p] != '\0'; p++)
		{
			if (s[h] == a[p])
			{
				s[h] = b[p];
				break;
			}
		}
	}
	return (s);
}
