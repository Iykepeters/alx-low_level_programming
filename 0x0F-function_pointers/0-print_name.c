#include <stdlib.h>
#include "function_pointers.h"
/**
 ** print_name - print a given name
 * @name: what to print
 * @f: pointer to the function to be printed
 */

void print_name(char *name, void (*f)(char *))

{

if (!name || !f)

return;

f(name);

}
