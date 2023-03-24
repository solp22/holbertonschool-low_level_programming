#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct form - struct
 * @f: the format
 * @func: the function associated
 */

typedef struct form
{
        char *f;
        void (*func)(va_list args);
}form_t;

void print_int(va_list arg);
void print_char(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

#endif
