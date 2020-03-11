#include "function_pointers.h"
/**
 * array_iterator - function given as a parameter on
 * each element of an array.
 * @array: string to print
 * @size: size array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array != 0 && size != 0 && action != 0)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
