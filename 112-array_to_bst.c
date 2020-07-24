#include "binary_trees.h"

/**
 * array_to_bst - builds a binary search tree from an array
 * @array: pointer to array
 * @size: size of array
 * Return: pointer to created BST
 **/
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i = 0;
	bst_t *tree = NULL;

	for (; i < size; i++)
		bst_insert(&tree, array[i]);

	return (tree);
}
