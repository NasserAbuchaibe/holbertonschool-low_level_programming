#include "function_pointers.h"
/**
 * int_index - function given as a parameter on
 * each element of an array.
 * @array: string to print
 * @size: size array
 * @cmp: function pointer
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	if (array && size && cmp)
	{
		int x;

		if (size <= 0)
			return (-1);
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) == 1)
				return (x);
		}
	}
	return (-1);
}
