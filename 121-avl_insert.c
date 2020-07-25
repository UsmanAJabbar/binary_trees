#include "binary_trees.h"

/**
 * avl_insert - insert a value in an AVL tree
 * @tree: pointer to tree
 * @value: value to insert into tree
 * Return: pointer to created tree
 **/
avl_t *avl_insert(avl_t **tree, int value)
{
    int balance;

    /* 1.  Perform the normal BST insertion */
    bst_insert(tree, value);
    balance = binary_tree_balance(*tree);

    /* Left Left Case */
    if (balance > 1 && value < (*tree)->left->n)
    {
        *tree = binary_tree_rotate_right(*tree);
        return (*tree);
    }

    /* Right Right Case */
    if (balance < -1 && value > (*tree)->right->n)
    {
        *tree = binary_tree_rotate_left(*tree);
        return (*tree);
    }

    /* Left Right Case */
    if (balance > 1 && value > (*tree)->left->n)
    {
        (*tree)->left = binary_tree_rotate_left((*tree)->left);
        *tree = binary_tree_rotate_right(*tree);
        return (*tree);
    }

    /* Right Left Case */
    if (balance < -1 && value < (*tree)->right->n)
    {
        (*tree)->right = binary_tree_rotate_right((*tree)->right);
        *tree = binary_tree_rotate_left(*tree);
        return (*tree);
    }

    /* return the (unchanged) (*tree) pointer */
    return (*tree);
}
