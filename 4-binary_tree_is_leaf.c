#include "binary_trees.h"
#include "binary_trees.h"
/**
 * binary_tree_is_leaf -checking if there are descendants
 * @node: pointer to the node to track
 * Return: 1 when children are there or 0 when not
**/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
