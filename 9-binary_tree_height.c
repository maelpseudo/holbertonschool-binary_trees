#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: a pointer to the tree
 *
 * Return: height of the node, 0 if tree is NULL
*/

int tree_height(Node* root)
{
	if (root == NULL)
		return 0;
	else
	{
		left_height = tree_height(root->left);
		right_height = tree_height(root->right);
		return max(left_height, right_height) + 1;
	}
}
