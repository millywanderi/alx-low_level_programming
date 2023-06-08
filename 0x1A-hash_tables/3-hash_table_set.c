#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: hast table in which the element is added
 * @key: key
 * @value: value associated with the key
 * Return: if successful 1, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nw = NULL;
	unsigned long int idx;

	if (!ht || !key || (strlen(key)) == 0 || !value)
		return (0);
	idx = hash_djb2((const unsigned char *)key) % ht->size;
	nw = ht->array[idx];
	while (nw != NULL)
	{
		if (strcmp(nw->key, key) == 0)
		{
			free(nw->value);
			nw->value = strdup(value);
			return (1);
		}
		nw = nw->next;
	}
	nw = malloc(sizeof(hash_node_t));
	if (nw == NULL)
		return (0);
	nw->key = strdup(key);
	if (nw->key == NULL)
		return (0);
	nw->value = strdup(value);
	if (nw->value == NULL)
		return (0);
	nw->next = ht->array[idx];
	ht->array[idx] = nw;
	return (1);
}
