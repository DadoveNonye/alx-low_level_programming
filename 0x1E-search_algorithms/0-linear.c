#include "search_algos.h"
/**
  * linear_search - Search for a value in an array
  *                 of integers using linear search algorithm
  * @array: pointer to the first element of the array to search.
  * @size: Number of elements in the array.
  * @value: The search value
  *
  * Return: If the value is not present or the array is NULL, -1.
  *
  * Description: Prints a value when compared
  */
int linear_search(int *array, size_t size, int value) {
	size_t i;
    if (array == NULL) {
        return -1;
    }
    for (i = 0; i < size; i++) {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}
