#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as a left child of
 * another in the binary tree.
 * @parent: a pointer to the node the left child is inserted in.
 * @value: the value to the store in the new node.
 *
 * Return: if the parent is NULL or an error occurs- NULL.
 * otherwise - a pointer to the new left-node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
