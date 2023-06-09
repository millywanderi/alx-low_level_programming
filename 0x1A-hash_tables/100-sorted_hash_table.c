#include "hash_tables.h"

/**
 * shash_table_create - a function that creates an ordered hash table
 * @size: array size
 * Return: new table pointer
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *n_table;

	n_table = malloc(sizeof(shash_table_t));
	if (n_table == NULL)
		return (NULL);
	n_table->size = size;

	n_table->array = malloc(sizeof(void *) * size);
	if (n_table->array == NULL)
	{
		free(n_table);
		return (NULL);
	}
	n_table->shead = NULL;
	n_table->stail = NULL;

	return (n_table);
}

/**
 * shash_table_set - a function that sets ordered hash table value
 * @ht: hash table
 * @key: key value
 * @value: value to be added to the key
 * Return: 1 if successful, otherwise 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *nw = NULL, *tmp = NULL;
	unsigned long int idx;

	if (!ht || !key || strlen(key) == 0)
		return (0);
	idx = hash_djb2((const unsigned char *)key) % ht->size;
	nw = malloc(sizeof(shash_node_t));
	nw->key = strdup(key);
	nw->value = strdup(value);
	nw->next = ht->array[idx];
	ht->array[idx] = nw;
	nw->snext = nw->sprev = NULL;
	tmp = ht->shead;
	if (tmp == NULL)
	{
		ht->shead = ht->stail = nw;
		return (1);
	}
	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) <= 0)
		{
			nw->snext = tmp;
			nw->sprev = tmp->sprev;
			tmp->sprev = nw;
			if (!nw->sprev)
				ht->shead = nw;
			else
				nw->sprev->snext = nw;
			return (1);
		}
		if (tmp->snext != NULL)
			tmp = tmp->snext;
		else
			break;
	}
	tmp->snext = nw;
	nw->sprev = tmp;
	ht->stail = nw;
	return (1);
}

/**
 * shash_table_get - gets the hash table value
 * @ht: hash table
 * @key: retrieve value key
 * Return: value if successful, otherwise NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *head = NULL;
	unsigned long int idx = 0;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = hash_djb2((unsigned char *)key) % ht->size;

	if (ht->array[idx] != NULL)
	{
		head = ht->array[idx];
		while (head != NULL)
		{
			if (strcmp(head->key, key) == 0)
				break;
			head = head->next;
		}
	}
	else
		return (NULL);
	return (head->value);
}

/**
 * shash_table_print - prints hash table
 * @ht: hash table to e printed
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;

	if (ht != NULL)
	{
		putchar('{');
		tmp = ht->shead;
		while (tmp != NULL)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (tmp->snext)
				printf(", ");
			tmp = tmp->snext;
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - prints a reverse hast table
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;

	if (ht != NULL)
	{
		putchar('{');
		tmp = ht->stail;
		while (tmp != NULL)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (!tmp->sprev)
				printf(", ");
			tmp = tmp->sprev;
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - a funct deleting hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp = NULL, *head = NULL;

	while (head != NULL)
	{
		tmp = head;
		head = head->snext;
		free(tmp->value);
		free(tmp->key);
		free(tmp);
	}
	free(ht->array);
	free(ht);
}
