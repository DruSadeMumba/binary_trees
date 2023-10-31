#include "binary_trees.h"

/**
 * binary_tree_insert_left - Adding new node on the left child
 * @parent: the parent node
 * @value: integer value to be insered in the new node
 * Return: the new left child node
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	n = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (n == NULL)
		return (NULL);

	n->n = value;
	n->parent = parent;
	n->left = NULL;
	n->right = NULL;

	if (parent->left != NULL)
	{
		n->left = parent->left;
		parent->left->parent = n;
		parent->left = n;
	}
	else
		parent->left = n;

	return (n);

}

