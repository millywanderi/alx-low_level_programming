#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of array
 *
 * Return: pointer to the newly created hash table, otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_table;

	n_table = malloc(sizeof(hash_table_t));
	if (n_table == NULL)
		return (NULL);
	n_table->size = size;

	n_table->array = malloc(sizeof(void *) * size);
	if (n_table->array == NULL)
	{
		free(n_table);
		return (NULL);
	}
	return (n_table);
}
