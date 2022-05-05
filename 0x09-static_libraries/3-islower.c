#include "main.h"

/**
 * _islower - checks if a char is lowercase
 *
 * @c:the cha to be checked
 *
 * Return: 1 if char is lower case
 */

int _islower(int c)
{
if (c > 'a' && c < 'z')
{
return (1);
}
else
{
return (0);
}
}
