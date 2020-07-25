#include "binary_trees.h"
#include "14-binary_tree_balance.c"

/**
 * binary_tree_is_avl - checks if a tree is a Binary Search Tree
 * @tree: pointer to tree
 * Return: 1 if BST | 0 if not or NULL
 **/
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_avl(tree, INT_MIN, INT_MAX));
}

/**
 * is_avl - checks if a tree is a binary search tree
 * @tree: pointer to tree
 * @min: minimum allowable value
 * @max: maximum allowable value
 * Return: 1 if bst || 0 if not
 **/
int is_avl(const binary_tree_t *tree, int min, int max)
{
	int child, balance;

	if (tree->left)
	{
		child = tree->left->n;
		if (child >= tree->n || child >= max || child <= min)
			return (0);

		if (is_avl(tree->left, min, tree->n) == 0)
			return (0);
	}

	if (tree->right)
	{
		child = tree->right->n;
		if (child <= tree->n || child >= max || child <= min)
			return (0);

		if (is_avl(tree->right, tree->n, max) == 0)
			return (0);
	}
	balance = binary_tree_balance(tree);

	return (balance >= -1 && balance <= 1);
}
