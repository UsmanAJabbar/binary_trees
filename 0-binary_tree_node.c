#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a new node and
 * connects it to the parent
 * @parent: address to parent
 * @value: value to insert into the newly created node
 * Return: new node || NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if(!node)
		return(NULL);

	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;

	return(node);
}
