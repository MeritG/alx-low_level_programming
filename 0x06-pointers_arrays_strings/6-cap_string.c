#include "main.h"

/**
 * *cap_string - a function that capitalizes all words of a string
 * @str: string
 * Return: string
 */

char *cap_string(char *str)
{
	int f = 1;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;

	while (str[f] != '\0')
	{
		if ((str[f - 1] == ' ' || str[f - 1] == '\t'
					|| str[f - 1] == '\n' || str[f - 1] == ',' || str[f - 1] == ';'
					|| str[f - 1] == '.' || str[f - 1] == '!' || str[f - 1] == '?'
					|| str[f - 1] '"' || str[f - 1] == '(' || str[f - 1] == ')'
					|| sttr[f - 1] == '{' || str[f - 1] == '}')
				&& (str[f] >= 'a' && str[f] <= 'z'))
		{
			str[f] = str[f] - 32;
		}
		f++;
	}
	return (str);
}
