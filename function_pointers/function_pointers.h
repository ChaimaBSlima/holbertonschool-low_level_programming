#ifndef __FUNCTION_POINTERS__
#define __FUNCTION_POINTERS__
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);

#endif /*__FUNCTION_POINTERS__*/
