#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * height - return height of a binary tree
 * @tree: pointer to node calculating height
 *
 * Return: Height of the binary tree
 */
size_t height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	if (left_height > right_height)
	return (left_height + 1);
	return (right_height + 1);
}

/**
 * binary_tree_balance - measures the
 * balance factor of a binary tree
 * @tree: pointer to the root node of the
 * tree to measure the balance factor
 *
 * Return: If tree is NULL 0, otherwise balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_side, right_side, balance_factor;

	if (tree == NULL)
		return (0);

	left_side = height(tree->left);
	right_side = height(tree->right);
	balance_factor = left_side - right_side;

	return (balance_factor);
}
