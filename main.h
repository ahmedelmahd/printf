#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
void print_binary(unsigned int num);
int print_int(va_list arguments, char *buf, unsigned int ibuf);
#endif
