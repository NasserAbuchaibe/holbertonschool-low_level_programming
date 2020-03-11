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

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
