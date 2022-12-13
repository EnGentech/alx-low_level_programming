#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
 char alphabet;
  for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
          putchar(alphabet);
      putchar('\n');
 }
int main(void)
{
  print_alphabet();
    return (0);
}
