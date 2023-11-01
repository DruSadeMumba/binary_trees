#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node
 * Return: count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	unsigned long count = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		count = 1;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count);
}
