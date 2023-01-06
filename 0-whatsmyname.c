#include <stdio.h>

/**
 * main - return the number of argument
 * @argv: call the vector
 * @argc: count the number of argument passed to main
 */

int main(int argc, char argc[])
{
	int i;

	for (i = 0; i < argc; i++)
		argc[i];
	return (argc);
}
