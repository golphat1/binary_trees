#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_is_leaf - Checks id a node is leaf.
 * @node: pointer to the node to check
 *
 * Return: If node is a leaf - 1
 * Otherwise - 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left || node->right)
		return (0);

	return (1);
}
