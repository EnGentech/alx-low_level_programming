#include "main.h"

/**
 * read_textfile - entry point to printing file content
 * @filename: point to the file in the memory
 * @letters: print these letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *glet;

	glet = fopen("filename", "r");
	fscanf(glet, "%s", &letter);

	for (i = 0; glet[i] != '\0'; i++)
		_putchar(glet[i])

			fclose(glet);
	return 0;

}
