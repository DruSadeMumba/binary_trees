#include "binary_trees.h"

/**
 * binary_tree_insert_right - Adding new node on the right child
 * @parent: the parent node
 * @value: integer value to be insered in the new node
 * Return: the new right child node
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	if (parent == NULL)
		return (NULL);

	n = malloc(sizeof(binary_tree_t));

	if (n == NULL)
		return (NULL);

	n->parent = parent;
	n->n = value;
	n->left = NULL;
	n->right = NULL;

	if (parent->right)
	{
		n->right = parent->right;
		parent->right->parent = n;
	}
	parent->right = n;

	return (n);

}
