#include "main.h"
/**
 *_strlen - gets num of char in string
 *@s: char of string to get num
 *Return: len of charachter
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 *_strlen - gets num of char in string
 *@s: const char of string to get num
 *Return: len of charachter
 */
int _strlenc(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
