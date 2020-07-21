#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/*
 * binary_tree_nodes - counts all the nodes
 * that have at least one child in it
 * @tree: binary tree
 * Return: Returns the number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_count = 0, right_count = 0;

	 if (!tree)
		return (0);

	left_count = binary_tree_nodes(tree->left);
	right_count = binary_tree_nodes(tree->right);

	return (left_count + right_count + !binary_tree_is_leaf(tree));
}
