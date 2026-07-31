#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the integer value, or 0 if no digits
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 - (s[i] - '0');
		i++;
	}
	if (sign > 0)
	{
		num = -num;
	}
	return (num);
}
