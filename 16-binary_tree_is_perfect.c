#include "binary_trees.h"

/**
 *_power - returns the value of x raised to the power of y
 *@x: the value to exponent
 *@y: the power to raise x to
 *Return: x to the power of y, or -1 if y is negative
 */

int _power(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _power(x, y - 1));
}

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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	unsigned short height, power, nodes;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	power = (size_t)_power(2, height + 1);
	return (power - 1 == nodes);
}
