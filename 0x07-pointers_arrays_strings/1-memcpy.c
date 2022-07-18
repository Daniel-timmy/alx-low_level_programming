#include "main.h"
/**
 * _memcpy - function copies n bytes from
 * memory area src to memory area dest
 * @dest: destination pointer
 * @src: source array
 * @n bytes of memory to be copied
 *
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
