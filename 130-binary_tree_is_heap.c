#include "binary_trees.h"
#include "102-binary_tree_is_complete.c"
int is_heap(const binary_tree_t *tree);
/**
 * binary_tree_is_heap - checks if binary tree is Binary Max Heap
 * @tree: pointer to root of tree
 * Return: 1 if heap | 0 if not or NULL
 **/
int binary_tree_is_heap(const binary_tree_t *tree)
{
	return (binary_tree_is_complete(tree) && is_heap(tree));
}

/**
 * is_heap - checks if binary tree is Binary Max Heap
 * @tree: pointer to root of tree
 * Return: 1 if heap | 0 if not or NULL
 **/
int is_heap(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->parent && tree->n >= tree->parent->n)
		return (0);

	if (tree->left && is_heap(tree->left) == 0)
		return (0);

	if (tree->right && is_heap(tree->right) == 0)
		return (0);

	return (1);
}
