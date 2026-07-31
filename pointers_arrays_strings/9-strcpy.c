#include "main.h"

/**
 * _strcpy - copies a string including the null byte to dest
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)   // fonction qui reçoit destination et source, renverra dest
{
	int i = 0;                     // index de parcours, démarre à la case 0

	while (src[i] != '\0')         // tant qu'on n'a pas atteint la fin de la source
	{
		dest[i] = src[i];      // copie le caractère courant de src vers dest
		i++;                   // passe à la case suivante
	}
	dest[i] = '\0';                // ajoute le marqueur de fin à la copie
	return (dest);                 // renvoie le pointeur vers la destination
}
