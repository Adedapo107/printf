// #ifndef HEADER_MAIN
// #define HEADER_MAIN
// #include <stdarg.h>
// int _putchar(char c);
// void _puts(char *str);
// int _strlen(char *s);
// int _printf(const char *format, ...);
// char *convert_to(char representation[], unsigned int num, int base);
// int function_manager(char c, va_list arg);
// int _switch(char c, va_list arg);
// int print_character(va_list arg);
// int print_sign(va_list arg, int base);
// int print_unsign(va_list arg, int base);
// int print_string(va_list arg);
// int print_ptr(va_list arg);
// int print_rot13(va_list arg);
// int print_rev(va_list arg);
// int print_base16_upper_lower(va_list arg, char *representation);
// int loop_format(va_list arg, const char *string);
// int call_function_manager(char aux, va_list arg);
// int check_percent(int *flag, char aux);
// #endif

#ifndef HEADER_MAIN
#define HEADER_MAIN

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct structprint - structure containing
 * @q: the location and method to translate data to characters.
 * @u: print function for specific type.
 *
 * Return: int
 */
typedef struct structprint
{
	char *q;
	int (*u)(char *format, va_list);
} structype;

int _putchar(char ch);
int _puts(char *string);
int printc(char *format, va_list);
int printstr(char *format, va_list);
int (*driver(char *format))(char *format, va_list);
int _printf(char *format, ...);
int printint(char *format, va_list pa);
int integer(int number);
int contadordigit(int number);
int _abs(int number);
int printpercent(char *format, va_list pa);
int printhex(char *format, va_list);
int printHEX(char *format, va_list);
int printocta(char *format, va_list);
int print_unsign(char *format, va_list);
#endif
