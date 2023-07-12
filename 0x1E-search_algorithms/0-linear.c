#include "search_algos.h"
/**
* linear_search - perform a linear search algorithm
* @array: point to the first element in the array
* @size: Validate the size of the array
* @value: the value to be found or searched for
* Return: return success on success
*/

int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

if (array == NULL)
{
return (-1);
}
else
{
for (i = 0; i <= size; i++)
{
if (i == size)
{
return (-1);
}
else
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (array[i]);
break;
}
}

}
}
return (0);
}

/* Coded by EnGentech */
