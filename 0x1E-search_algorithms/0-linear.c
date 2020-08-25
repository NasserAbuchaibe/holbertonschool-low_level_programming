#include "search_algos.h"

/**
  * linear_search - function that searches for a value in an array of
  * integers using the Linear search algorithm
  * @array: is a pointer to the first element of the array to search in.
  * @size: number of elements in array
  * @value: value to search fo
  * Return: index or -1
  */
int linear_search(int *array, size_t size, int value)
{
	unsigned int index;

	if (!array)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%i] = [%i]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
