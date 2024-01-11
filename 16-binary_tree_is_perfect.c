#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 if not or tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);

    if (binary_tree_is_full(tree))
    {
        left_height = binary_tree_height(tree->left);
        right_height = binary_tree_height(tree->right);

        return (left_height == right_height);
    }

    return (0);
}

