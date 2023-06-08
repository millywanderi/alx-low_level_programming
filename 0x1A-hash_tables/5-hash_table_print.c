#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int m = 0;
	unsigned long int n;
	hash_node_t *temp = NULL;

	if (ht != NULL)
	{
		putchar('{');
		while (m < ht->size)
		{
			if (ht->array[m])
			{
				temp = ht->array[m];
				while (temp != NULL)
				{
					printf("'%s': '%s'", temp->key, temp->value);
					if (temp->next != NULL)
						printf(", ");
					temp = temp->next;
				}
				for (n = m + 1; n < ht->size; n++)
				{
					if (ht->array[n])
					{
						printf(", ");
						break;
					}
				}
			}
			m++;
		}
		printf("}\n");
	}
}
