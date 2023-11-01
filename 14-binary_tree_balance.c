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
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance, n_right, n_left;

	if (!tree)
		return (0);

	n_left = tree->left ? (int)binary_tree_height(tree->left) : -1;
	n_right = tree->right ? (int)binary_tree_height(tree->right) : -1;
	balance = n_left - n_right;
	return (balance);
}
