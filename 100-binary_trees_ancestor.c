#include "binary_trees.h"
/**
 * binary_trees_ancestor - finding the uncle in binary tree
 * @first: first node
 * @second: second node
 * Return: uncle node
 **/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *first_node, *second_node;

	if (!first && !second)
		return (NULL);

	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	first_node = first->parent;
	second_node = second->parent;

	if (!first_node || first == second_node ||
			(first_node->parent == NULL && second_node))
	{
		return (binary_trees_ancestor(first, second_node));
	}
	else if (!second_node || first_node == second ||
			(second_node->parent == NULL && first_node))
	{
		return (binary_trees_ancestor(first_node, second));
	}
	return (binary_trees_ancestor(first_node, second_node));
}
