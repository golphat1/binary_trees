#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_depth - measures the depth of
 * a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: if tree is NULL return 0
 * Otherwise - depth of the node of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dp = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	dp = binary_tree_depth(tree->parent) + 1;

	return (dp);
}
