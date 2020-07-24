#include "binary_trees.h"
#include "9-binary_tree_height.c"

void traverse_level(const binary_tree_t *tree, int level, void (*func)(int));
/**
 * binary_tree_levelorder - traverses a binary tree level-by-level
 * @tree: pointer to tree
 * @func: parsing function
 **/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height = binary_tree_height(tree);
	int i;

	if (ISLEAF(tree))
		func(tree->n);

	else
		for (i = 0; i < height + 1; i++)
			traverse_level(tree, i, func);
}

/**
 * traverse_level - helper function that traverses a binary tree level
 * @tree: pointer to tree
 * @level: current level of treee
 * @func: parsing function
 **/
void traverse_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;

	if (level == 0)
	{
		func(tree->n);
		return;
	}

	traverse_level(tree->left, level - 1, func);
	traverse_level(tree->right, level - 1, func);
}
