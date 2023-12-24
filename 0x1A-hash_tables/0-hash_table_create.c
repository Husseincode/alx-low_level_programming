#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 * Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *heit;
	unsigned long int i;

	heit = malloc(sizeof(hash_table_t));
	if (heit == NULL)
	{
		return (NULL);
	}

	heit->size = size;
	heit->array = malloc(sizeof(hash_node_t *) * size);
	if (heit->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		heit->array[i] = NULL;
	}

	return (heit);
}
