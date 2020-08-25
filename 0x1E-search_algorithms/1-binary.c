#include "search_algos.h"

/**
  * lbinary_search - function that searches for a value in an array of
  * integers using the binary search algorithm
  * @array: is a pointer to the first element of the array to search in.
  * @size: number of elements in array
  * @value: value to search fo
  * Return: index or -1
  */
int binary_search(int *array, size_t size, int value)
{
	unsigned int count, tail = 0, head = size - 1, mid;

	if (!array)
		return (-1);

	while (tail <= head)
	{
		count = tail;
		printf("Searching in array: ");
		for (; count < head; count++)
		{
			printf("%d, ", array[count]);
		}
		printf("%d\n", array[count]);
		mid = (tail + head) / 2;
		if (array[mid] == value)
			return (mid);
		if (value > array[mid])
			tail = mid + 1;
		else
			head = mid - 1;
	}
	return (-1);
}
