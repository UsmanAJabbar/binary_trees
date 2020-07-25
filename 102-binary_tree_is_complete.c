#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_complete - checks if tree is complete
 * @tree: pointer to tree
 * Return: 1 if complete | 0 if incomplete or NULL
 **/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int i, tmp = 1, height = binary_tree_height(tree);

	if (!tree)
		return (0);

	for (i = 0; i < height + 1 && tmp; i++)
		tmp = is_complete(tree, i);

	is_complete(NULL, 99);

	return (tmp);
}

/**
 * is_complete - helper function for binary_tree_is_complete
 * @tree: pointer to tree
 * @level: current level of treee
 * Return: 1 if complete | 0 if not
 **/
int is_complete(const binary_tree_t *tree, int level)
{
	static int status;
	binary_tree_t *left, *right;

	if (!tree && level == 99)
	{
		status = 0;
		return (0);
	}

	if (level == 0)
	{
		if (!tree)
			return (1);

		if (status)
			return (ISLEAF(tree));

		if (!tree->right)
		{
			status = 1;
			return (1);
		}

		return (tree->left != NULL);
	}

	left = tree->left;
	right = tree->right;
	level = level - 1;

	return (is_complete(left, level) && is_complete(right, level));
}
