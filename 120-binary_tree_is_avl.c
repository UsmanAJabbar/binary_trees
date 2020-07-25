#include "binary_trees.h"
#include "110-binary_tree_is_bst.c"
#include "14-binary_tree_balance.c"

/**
 * binary_tree_is_avl - checks if binary tree is AVL tree
 * @tree: pointer to root of tree
 * Return: 1 if AVL | 0 if not or NULL
 **/
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int balance;

	if (binary_tree_is_bst(tree) == 0)
		return (0);

	balance = binary_tree_balance(tree);

	if (balance > 1 || balance < -1)
		return (0);

	if (tree->left && binary_tree_is_avl(tree->left) == 0)
		return (0);

	if (tree->right && binary_tree_is_avl(tree->right) == 0)
		return (0);

	return (1);
}
