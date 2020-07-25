#include "binary_trees.h"
#include "113-bst_search.c"

/**
 * bst_remove - removes a replacement from a binary search tree
 * @root: pointer to tree
 * @value: value to remove
 * Return: pointer to root of tree
 **/
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *node = bst_search(root, value);
	bst_t *replacement = inorder_successor(node);

	if (!root || !node)
		return (NULL);

	if (replacement)
	{
		if (replacement->parent)
			replacement->parent->left = replacement->right;
		replacement->parent = node->parent;
		replacement->left = node->left;
		if (replacement->right)
			replacement->right->parent = replacement->parent;
		replacement->right = node->right;
	}

	if (node->right)
		node->right->parent = replacement;

	if (node->left)
		node->left->parent = replacement;

	if (node == root)
		root = replacement;
	else
	{
		if (node->parent->left == node)
			node->parent->left = replacement;
		else
			node->parent->right = replacement;
	}

	free(node);
	return (root);
}

/**
 * inorder_successor - returns pointer to inorder succesor of node
 * @node: pointer to tree
 * Return: pointer to inorder successor of node || NULL if doesn't exist
 **/
bst_t *inorder_successor(bst_t *node)
{
	if (!node || ISLEAF(node))
		return (NULL);

	if (!node->right)
		return (node->left);

	node = node->right;
	while (node->left)
		node = node->left;

	return (node);
}
