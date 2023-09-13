#include "search_algos.h"

skiplist_t *recur_normal(skiplist_t *probe, skiplist_t *stop, int value);
skiplist_t *rec_express(skiplist_t *probe, int value);
skiplist_t *find_list_end(skiplist_t *probe);

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: pointer on the first node where value is located, otherwise NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *zone = NULL;

	if (list == NULL)
		return (NULL);

	zone = rec_express(list, value);

	if (zone->n == value)
		return (zone);
	return (recur_normal(zone, zone->express, value));
}

/**
 * rec_express - search express list
 * @probe: search pointer
 * @value: search value
 *
 * Return: pointer to match, otherwise NULL
 */
skiplist_t *rec_express(skiplist_t *probe, int value)
{
	skiplist_t *last = NULL;

	if (probe->express == NULL)
	{
		last = find_list_end(probe);
		printf("Value found between indexes [%lu] and [%lu]\n",
probe->index, last->index);
		return (probe);
	}
	printf("Value checked at index [%lu] = [%d]\n",
probe->express->index, probe->express->n);

	if (probe->express->n >= value)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
probe->index, probe->express->index);
		return (probe);
	}
	return (rec_express(probe->express, value));
}

/**
 * recur_normal - search normal list
 * @probe: search pointer
 * @stop: endpoint
 * @value: search value
 *
 * Return: pointer to match, otherwise NULL
 */
skiplist_t *recur_normal(skiplist_t *probe, skiplist_t *stop, int value)
{
	if (probe == stop)
	{
		if (stop != NULL && stop->n == value)
			return (stop);
		return (NULL);
	}
	printf("Value checked at index [%lu] = [%d]\n",
probe->index, probe->n);

	if (probe->n == value)
		return (probe);
	return (recur_normal(probe->next, stop, value));
}

/**
 * find_list_end - find last node
 * @probe: search pointer
 *
 * Return: pointer to final node
 */
skiplist_t *find_list_end(skiplist_t *probe)
{
	if (probe->next == NULL)
		return (probe);
	return (find_list_end(probe->next));
}
