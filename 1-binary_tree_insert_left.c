#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_left- inserts a new binary node
 * @parent: pointer to the node to insert left-child in
 * @value: value to store the new node
 *
 * Return: if parent is NULL or an error ocuurs - NULL
 * Otherwise - a pointer to the new node
 *
 * Description: If parent already has a left-child,
 * the new node must take its place, and the old
 * left-child must be set as the left-child of the new node
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
