#include "binary_trees.h"

/**
 * binary_trees_ancestor - returns nearest common ancestor of two tree nodes
 * @first: first tree node
 * @second: second tree node
 * Return: pointer to nearest ancestor node of first and second
 **/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *f_temp, *s_temp;

	for (f_temp = (binary_tree_t *)first; f_temp; f_temp = f_temp->parent)
		for (s_temp = (binary_tree_t *)second; s_temp; s_temp = s_temp->parent)
			if (f_temp == s_temp)
				return (f_temp);

	return (NULL);
}
