#include "binary_trees.h"

/**
 * binary_tree_node - creating a node in binary tree
 * @parent: the parent node from the children
 * @value: data(int) to be inserted in the new node
 * Return: pointer to the new node
**/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	n = malloc(sizeof(binary_tree_t));

	if (n == NULL)
		return (NULL);

	n->parent = parent;
	n->n = value;
	n->left = NULL;
	n->right = NULL;

	return (n);
}
