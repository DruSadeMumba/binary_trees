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

/**
 * is_bst - is binary search tree
 * @tree: pointer to the root node of the tree
 * @min: pointer to min val
 * @max: pointer to max val
 * Return: 0
 */
int is_bst(const binary_tree_t *tree, int min, int max)
{
	int left, right;

	if (!tree)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);

	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	if (abs(left - right) > 1)
		return (0);

	return (is_bst(tree->left, min, (tree->n - 1)) &&
			is_bst(tree->right, (tree->n + 1), max));
}

/**
 * binary_tree_is_avl - checks if a binary tree is a valid AVL Tree
 * @tree: pointer to the root node
 * Return: 1 or 0
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if(!tree)
		return (0);
	return (is_bst(tree, INT_MIN, INT_MAX));
}
