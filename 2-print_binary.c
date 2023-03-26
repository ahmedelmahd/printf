#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * print_binary - this function converts the decimal (base 10) numbers
 * into binary ones using a recursive function call
 * @num: the number we need to convert
 * Return: void
 */
void print_binary(unsigned int num)
{
	char c;
	if (num >> 1)
	{
		print_binary(num >> 1);
	}
	c = ((num & 1) ? '1' : '0');
	write(1, &c, 1);
}
