#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/* includes */
#include <stdarg.h>
#include <stdio.h>

/* prototypes */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/* structs */
struct fm_t
{
	char *fm;
	void (*p)();
};

#endif /* VARIADIC_FUNCTIONS_H */