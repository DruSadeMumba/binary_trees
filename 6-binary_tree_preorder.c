#include "binary_trees.h"
/**
 * binary_tree_preorder - traversing in the pre-order direction
 * @tree: pointer to the root node of traversing tree
 * @func: to be used for various purpos
**/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
