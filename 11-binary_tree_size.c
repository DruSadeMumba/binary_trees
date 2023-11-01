#include "binary_trees.h"

/**
* binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node
 * Return: size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t n;

	if (!tree)
		return (0);

	n = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;
	return (n);
}
