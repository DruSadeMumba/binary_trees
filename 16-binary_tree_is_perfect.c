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

/**
 * is_perfect_recursive - checks if the binary tree is perfect
 * @tree: a pointer to the root node
 * @depth: current depth in the tree
 * @count: total number of nodes
 * Return: 1 or 0
 */
int is_perfect_recursive(const binary_tree_t *tree, int depth, int count)
{
	if (!tree || !tree->left || !tree->right)
		return (0);
	if (!tree->left && !tree->right)
		return (depth == (int)(log2(count)));
	return (is_perfect_recursive(tree->left, depth + 1, count)) &&
			is_perfect_recursive(tree->right, depth + 1, count);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	unsigned short count;

	if (!tree)
		return (0);
	count = binary_tree_size(tree);
	return (is_perfect_recursive(tree, 0, count));
}
