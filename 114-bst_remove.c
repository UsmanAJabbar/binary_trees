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
	bst_t *node = bst_search(root, value);
	bst_t *replacer = inorder_successor(node);

	if (!root || !node)
		return (NULL);

	if (replacer->parent != node)
	{
		replace_child(replacer, replacer->right);
		replace_parent(replacer->right, replacer->parent);
		replacer->right = node->right;
	}

	if (replacer != node->left)
		replacer->left = node->left;
	replace_child(node, replacer);
	replace_parent(replacer, node->parent);
	replace_parent(node->left, replacer);
	replace_parent(node->right, replacer);

	if (root == node)
		root = replacer;
	free(node);
	return (root);
}

/**
 * replace_child - replaces old_child with new_child for a parent node
 * @old_child: old child, to be removed.
 * @new_child: new child to replace old_child
 **/
void replace_child(bst_t *old_child, bst_t *new_child)
{
	if (old_child->parent)
	{
		if (old_child->parent->left == old_child)
			old_child->parent->left = new_child;
		else
			old_child->parent->right = new_child;
	}
}
/**
 * replace_parent - replaces node's parent with new_parent
 * @node: node
 * @new_parent: new parent
 **/
void replace_parent(bst_t *node, bst_t *new_parent)
{
	if (node && node != new_parent)
		node->parent = new_parent;
}

/**
 * inorder_successor - searches for the in-order successor of node
 * @node: node
 * Return: pointer to in-order successor of node
 **/
bst_t *inorder_successor(bst_t *node)
{
	if (!node->right)
		return (node->left);

	node = node->right;

	while (node->left)
		node = node->left;

	return (node);
}
