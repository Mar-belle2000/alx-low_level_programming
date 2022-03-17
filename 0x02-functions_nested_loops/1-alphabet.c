#include "main.h"

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
