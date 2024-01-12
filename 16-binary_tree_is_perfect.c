#include "binary_trees.h"

/**
<<<<<<< HEAD
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
=======
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

>>>>>>> a7f6403cb0a58fbbe886b06c33fcb49c7be5e683
