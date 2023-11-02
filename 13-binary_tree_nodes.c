#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_nodes - counts the nodes with at
 * least 1 child in a binary tree
 * @tree: pointer to the root node of the
 * tree to count the number of nodes
 *
 * Return: The count of nodes in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leftnode, rightnode, nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		nodes++;

	leftnode = binary_tree_nodes(tree->left);
	rightnode = binary_tree_nodes(tree->right);

	nodes += (leftnode + rightnode);
	return (nodes);
}
