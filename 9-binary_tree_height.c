#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of
 * the tree to measure the height.
 *
 * Return: If NULL, function must return 0, else return height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rh, lh;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	if (lh > rh)
	return (lh + 1);
	return (rh + 1);
}
