#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_levelorder - goes through a binary tree using
 *                          level-order traversal
 * @tree: pointer to tree
 * @func: parsing function
 **/
void traverse_level(const binary_tree_t *tree, int level, void (*func)(int));
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height = binary_tree_height(tree);
	int i;

	for (i = 0; i < height + 1; i++)
		traverse_level(tree, i, func);
}

void traverse_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (level == 0)
	{
		func(tree->n);
	}
	else
	{
		traverse_level(tree->left, level - 1, func);
		traverse_level(tree->right, level - 1, func);
	}
}
