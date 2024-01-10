#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    size_t height = binary_tree_height(tree);
    size_t max_nodes = (1 << height) - 1; // 2^height - 1 nodes for a perfect binary tree

    size_t count = count_nodes(tree);

    return (count == max_nodes) && binary_tree_is_full(tree);
}
