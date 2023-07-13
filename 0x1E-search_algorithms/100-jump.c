#include "search_algos.h"

/**
* jump_search - perform a jump search algorithm
* @array: this constitute the elements
* @size: determinant of the array size
* @value: value to be search for
* Return: return the needed value
*/

int jump_search(int *array, size_t size, int value)
{
size_t jmp_pos, start, end, i, j;
start = 0;
jmp_pos = sqrt(size);
end = jmp_pos;
while (value > array[end])
{
start = end;
end = end + jmp_pos;
}
for (i = 0; i < size; i += jmp_pos)
{
if (value <= array[i])
{
printf("Value found between indexes [%lu] and [%lu]\n", start, end);

for (j = start; j <= end; j++)
{
printf("Value checked array[%lu] = [%d]\n", j, array[j]);
if (value == array[j])
{
return (j);
break;
}
}
}

printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if ((value > array[size - 1]) && (i == size - 1))
{
printf("Value found at indexes [%lu] and [%lu]\n",
start - jmp_pos, end - jmp_pos);
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
}

}

return (-1);
}

/* Coded by EnGentech */
