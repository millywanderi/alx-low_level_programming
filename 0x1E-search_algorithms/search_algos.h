#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
	
/* LIBRARIES */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int recursive_helper(int *array, size_t left, size_t right, int value);
int jump_search(int *array, size_t size, int value);
int subrecurse_help(int *array, size_t size, size_t end, size_t idx, int val);
int recurse_helper(int *array, size_t size, size_t step, size_t idx, int val);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
void print_array(int *array, size_t size);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
skiplist_t *recur_normal(skiplist_t *probe, skiplist_t *stop, int value);
skiplist_t *rec_express(skiplist_t *probe, int value);
skiplist_t *find_list_end(skiplist_t *probe);

/* listint prototypes */
listint_t *create_list(int *array, size_t size);
void free_list(listint_t *list);
void print_list(const listint_t *list);

/* skiplist prototypes */
void init_express(skiplist_t *list, size_t size);
skiplist_t *create_skiplist(int *array, size_t size);
void free_skiplist(skiplist_t *list);
void print_skiplist(const skiplist_t *list);

#endif
