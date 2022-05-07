#include "main.h"
#include <stdio.h>
/**
 * main - Print the name of a program
 * @argc: Counts Arguments
 * @argv: Argument Vectors
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

if (argc > 0)
printf("%s\n", argv[0]);

return (0);
}
