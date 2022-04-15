#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to check code
 * _isupper - checks for uppercase letters
 * Return: Always 0 (success)
 */

int _isupper(int c)
{
   if ( c >= 'A' && c <= 'Z')
   {
	return (1);
   }
   else
   {
	return (0);
   }
}
