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
int is_bst(const binary_tree_t *tree, const int *min, const int *max)
{
	 if (!tree)
		 return (0);
	 if (tree->n <= *min || tree->n >= *max)
		 return (0);
	 return (is_bst(tree->left, min, &(tree->n)) && is_bst(tree->right, &(tree->n), max));
}

/**
 * binary_tree_is_avl - checks if a binary tree is a valid AVL Tree
 * @tree: pointer to the root node
 * Return: 1 or 0
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int min = INT16_MIN, max = INT16_MAX;
	int l_h, r_h;

	if (!tree || !is_bst(tree, &min, &max))
		return (0);
	l_h = binary_tree_height(tree->left);
	r_h = binary_tree_height(tree->right);

	if (abs(l_h - r_h) > 1)
		return (0);
	if (!binary_tree_is_avl(tree->left) || (!binary_tree_is_avl(tree->right)))
		return (0);
	return (1);
}
