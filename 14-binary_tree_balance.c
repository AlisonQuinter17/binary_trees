#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: height of a binary tree or 0 if tree is null.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height < right_height)
	{
		return (right_height + 1);
	}
	return (left_height + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 * Return: 0 if tree don't exist.
 **/
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	l = (tree->left) ? (int)binary_tree_height(tree->left) : -1;
	r = (tree->right) ? (int)binary_tree_height(tree->right) : -1;

	return (l - r);
}
