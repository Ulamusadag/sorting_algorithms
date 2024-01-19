#include "sort.h"

/**
 * bubble_sort - function use bubble_sort algorithm
 * @array: pointer to array of intigers
 * @size: size of the array
 * Return: the sorted array
*/

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	int temp = 0;

	if (!array || !size)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		
		}
	}
}
