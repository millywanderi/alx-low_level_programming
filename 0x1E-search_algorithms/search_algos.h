#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
	
/* LIBRARIES */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int recursive_helper(int *array, size_t left, size_t right, int value);
int jump_search(int *array, size_t size, int value);
int subrecurse_help(int *array, size_t size, size_t end, size_t idx, int val);
int recurse_helper(int *array, size_t size, size_t step, size_t idx, int val);
int interpolation_search(int *array, size_t size, int value);

#endif
