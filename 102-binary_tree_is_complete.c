#include "binary_trees.h"
#include "9-binary_tree_height.c"

int is_complete(const binary_tree_t *tree, int level, int reset);
/**
 * binary_tree_is_complete - checks if tree is complete
 * @tree: pointer to tree
 * Return: 1 if complete | 0 if incomplete or NULL
 **/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int i, tmp = 1, height = binary_tree_height(tree);

	is_complete(NULL, 0, 1);

	for (i = 0; i < height + 1 && tmp; i++)
		tmp = is_complete(tree, i, 0);

	is_complete(NULL, 0, 1);

	return (tmp);
}

/**
 * is_complete - helper function for binary_tree_is_complete
 * @tree: pointer to tree
 * @level: current level of treee
 * @reset: reset variable
 * Return: 1 if complete | 0 if not
 **/
int is_complete(const binary_tree_t *tree, int level, int reset)
{
	static int result, status;
	binary_tree_t *left, *right;

	if (reset)
	{
		result = 0;
		status = 0;
		return (0);
	}

	if (!tree)
		return (result);

	if (level == 0)
	{
		status = (ISLEAF(tree) || (tree->left && !tree->right));
		if (status == 0)
			result = (tree->right && tree->left);
		else if (status == 1)
			result = (ISLEAF(tree));
		if (result == 0)
			return (0);
	}

	left = tree->left;
	right = tree->right;
	level = level - 1;

	return (is_complete(left, level, 0) && is_complete(right, level, 0));
}
