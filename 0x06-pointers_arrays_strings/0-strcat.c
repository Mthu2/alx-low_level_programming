#include "main.h"

/**
 * strcat - concatenates two strings
 * using n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
        int i;
        int j;

        i = 0;
        while (dest[i] != '\0')
        {
                i++;
        }
        j = 0;
        while (src[j] != '\0')
        {
		dest[i] = src[j];
		i++;
		j++;
        }
        dest[i] = '\0';
        return (dest);
}
