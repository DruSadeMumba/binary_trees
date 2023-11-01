#include "binary_trees.h"
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

	if (parent == NULL)
		return (NULL);

	n = malloc(sizeof(binary_tree_t));

	if (n == NULL)
		return (NULL);

	n->parent = parent;
	n->n = value;
	n->left = NULL;
	n->right = NULL;

	if (parent->left)
	{
		n->left = parent->left;
		parent->left->parent = n;
	}
	parent->left = n;

	return (n);

}
