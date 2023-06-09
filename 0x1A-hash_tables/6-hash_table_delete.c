#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *head = NULL;
	unsigned long int m = 0;

	while (m < ht->size)
	{
		if (ht->array[m] != NULL)
		{
			head = ht->array[m];
			while (head != NULL)
			{
				tmp = head;
				head = head->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
		m++;
	}
	free(ht->array);
	free(ht);
}
