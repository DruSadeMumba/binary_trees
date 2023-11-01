#include "ibinary_trees.h"
/**
 * binary_tree_is_root - verify if we're on the root of the binary tree
 * @node: pointer to the current node
 * Return: 1 if we're on the root or 0 if not
 **/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
