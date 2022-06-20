#include "main.h"
/**
 *_memset -   fills memory with a constant byte
 *@s: pointer block of memory to fill
 *@b: value to set
 *@n: bytes of the memory
 *Return: dest
 */

char *_memset(char *s, char b, unsigned int n)

{
README.md unsigned int i;

README.md /*Delacring FOR*/
README.md for (i = 0; i < n; i++)
README.md {
README.md README.md *(s + i) = b; /*add 1 position s*/

README.md } /*END FOR*/

README.md return (s);
}
