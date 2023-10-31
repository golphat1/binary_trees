#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates binary tree node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 *
 * Return: NULL - if error occurs
 * Otherwise - a pointer to new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;

	return (new);
}
