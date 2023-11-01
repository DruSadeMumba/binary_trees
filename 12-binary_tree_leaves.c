#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node
 * Return: count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	unsigned long count;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (count);
}
