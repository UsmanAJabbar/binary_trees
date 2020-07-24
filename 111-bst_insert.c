#include "binary_trees.h"

/**
 * bst_insert - insert a value in a binary search tree
 * @tree: pointer to tree
 * @value: value to insert into tree
 * Return: pointer to created node
 **/
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp;

	if (!tree || !(*tree))
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	tmp = *tree;

	if (value == tmp->n)
		return (NULL);

	if (value > tmp->n)
	{
		if (tmp->right)
			return (bst_insert(&(tmp->right), value));

		tmp->right = binary_tree_node(tmp, value);
		return (tmp->right);
	}

	if (tmp->left)
		return (bst_insert(&(tmp->left), value));

	tmp->left = binary_tree_node(tmp, value);
	return (tmp->left);
}
