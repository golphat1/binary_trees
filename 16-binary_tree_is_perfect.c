#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
#include "14-binary_tree_balance.c"
#include "15-binary_tree_is_full.c"

/**
 * confirm_leaves - check if all leaves are of same level
 * @tree: pointer to node to start checking
 * @cur: current level of leaf
 * @level: level of past leaves
 *
 * Return: 1 if all leaves are at the same level, otherise 0
 */
int confirm_leaves(const binary_tree_t *tree, int cur, int *level)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
	{
		if (*level == 0)
		{
			*level = cur;
			return (1);
		}
		return (*level == cur);
	}
	return (confirm_leaves(tree->left, cur + 1, level) &&
			confirm_leaves(tree->right, cur + 1, level));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int level = 0;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) && (!binary_tree_balance(tree)))
	{
		return (confirm_leaves(tree, 0, &level));
	}

	return (0);
}
