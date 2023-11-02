#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree
 * to count the number of leaves
 *
 * Return: If tree is NULL - return 0
 * Description: NULL pointer is not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftlf, rightlf;

	if (tree == NULL)
		return (0);

	leftlf = binary_tree_leaves(tree->left);
	rightlf = binary_tree_leaves(tree->right);

	return (leftlf + rightlf);
}
