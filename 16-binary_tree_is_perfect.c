#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree: pointer to tree
 * Return: 1 if perfect | 0 if not perfect
 **/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/**
	 * I am using this as a reference:
	 * `https://www.geeksforgeeks.org/check-weather-given-binary-tree-perfect-not/`
	 * 
	 * Here's the strategy:
	 * - Traverse all the way down to the leaves.
	 * - If, on the way, we run into a non-leaf node that points to a NULL, we return 0.
	 * - When we reach a leaf, we compare that leaf's depth to the tree's height.
	 *      - If the number is the same, we return 1. Else, return 0
	 * 
	 * Note:
	 *  - The geeks4geeks algorithm returns 1 if NULL. We need to return 0.
	 *  - You'll notice that the geeks4geeks algorithm uses a three-argument function.
	 *    My opinion is that this is the simplest way to approach the problem, so we
	 *    should do that too. We should treat binary_tree_is_perfect as a function wrapper
	 *    for a function IsPerfect(tree, expected_depth, current_depth);
	 * 
	 * Approach:
	 * 1. Get height of tree ONCE. Store in expected_depth variable.
	 * 2. Do all the dirty work in IsPerfect(tree, expected_depth, current_depth = 0)
	 *      A. Inspect tree:
	 *          - If tree is NULL -> return 0
	 *          - If tree points to a NULL and is not a leaf -> return 0
	 *          - If tree does not point to any NULLs
	 *              -> Go down one level. Inspect children
	 *                  i.e.: call on IsPerfect(tree->right/left, expected_depth, current_depth + 1); 
	 *          - If tree is a leaf:
	 *              - if expected_depth == current_depth, return 1. else return 0
	 **/

}
