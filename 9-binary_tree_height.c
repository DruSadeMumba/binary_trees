#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: max
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t n_right, n_left, max;

	if (!tree)
		return (0);

	if (tree->left)
		n_left = 1 + binary_tree_height(tree->left);
	else
		n_left = 0;

	if (tree->right)
		n_right = 1 + binary_tree_height(tree->right);
	else
		n_right = 0;

	if (n_left > n_right)
		max = n_left;
	else
		max = n_right;

	return (max);
}
