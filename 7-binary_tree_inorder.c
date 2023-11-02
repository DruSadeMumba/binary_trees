#include "binary_trees.h"
/**
 * binary_tree_inorder - traversing in the inorder direction
 * @tree: pointer to the root node of traversing tree
 * @func: to be used for various purpos
**/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
