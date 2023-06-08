#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of array
 *
 * Return: pointer to the newly created hash table, otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int m = 0;
	hash_table_t *new_table;

	if (size < 1)
		return (NULL);
	new_table = malloc(sizeof(hash_table_t *) * size);
	if (!new_table)
		return (NULL);
	new_table->array = malloc(sizeof(hash_table_t *) * size);
	if (new_table->array == NULL)
		return (NULL);
	for (m = 0; m < size; m++)
		new_table->array[m] = NULL;
	new_table->size = size;
	return (new_table);
}
