#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: is the int that will be for the argument of the function
 * Return: Aways 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
