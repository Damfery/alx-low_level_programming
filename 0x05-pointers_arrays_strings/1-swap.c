#include "main.h"
/**
 * swap_int - Does what it says
 * @var1: integer to swap
 * @var2: integer to swap
 *
 */

void swap_int(int *var1, int *var2)
{
	int a = *var1;
	*var1 = *var2;
	*var2 = a;
}
