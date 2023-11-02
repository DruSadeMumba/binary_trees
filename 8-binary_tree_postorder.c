#include "binary_trees.h"
/**
 * binary_tree_postorder - traversing in the post-order direction
 * @tree: pointer to the root node of traversing tree
 * @func: to be used for various purpos
**/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
