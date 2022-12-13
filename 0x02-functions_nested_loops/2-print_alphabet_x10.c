#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int cnt;
char lalpha;
 cnt = 0;
 while (cnt < 10)
   {
     for (lalpha = 'a'; lalpha <= 'z'; lalpha++)
       {
	 _putchar(lalpha);
       }
     cnt++;
     _putchar('\n');
   }
}
