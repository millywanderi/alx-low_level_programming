#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: hash table to be checked
 * @key: key
 * Return: value associated with the element, otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp = NULL;
	unsigned long int idx = 0;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = hash_djb2((unsigned char *)key) % ht->size;
	if (ht->array[idx] != NULL)
	{
		temp = ht->array[idx];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
				break;
			temp = temp->next;
		}
	}
	else
	{
		return (NULL);
	}
	return (temp->value);
}
