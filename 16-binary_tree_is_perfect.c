#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the node, 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return 0;

	while (tree->parent != NULL) {
		depth++;
		tree = tree->parent;
	}

	return depth;
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;
	
	if (tree == NULL)
		return (0);
	depth = binary_tree_depth(tree);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	if (binary_tree_depth(tree->left) == depth - 1 && binary_tree_depth(tree->right) == depth - 1)
	{
		if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
