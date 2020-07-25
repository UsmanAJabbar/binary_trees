#include "binary_trees.h"
#include "113-bst_search.c"

/**
 * bst_remove - removes a node from a binary search tree
 * @root: pointer to tree
 * @value: value to remove
 * Return: pointer to root of tree
 **/
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *tmp = bst_search(root, value);
	bst_t *other;

	if (!root || !tmp)
		return (NULL);

	if (ISLEAF(tmp))
	{
		if (tmp == root)
		{
			free(root);
			return (NULL);
		}

		if (tmp->parent->left == tmp)
			tmp->parent->left = NULL;
		else
			tmp->parent->right = NULL;

		free(tmp);
		return (root);
	}

	if (tmp->left && tmp->right)
		return (root);

	if (tmp->left)
		other = tmp->left;
	else
		other = tmp->right;

	if (tmp->parent->left == tmp)
		tmp->parent->left = other;
	else
		tmp->parent->right = other;
	other->parent = tmp->parent;
	free(tmp);
	return (root);
}
