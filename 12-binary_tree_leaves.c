#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves or 0 if there is no tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (tree)
	{
		if (!tree->left && !tree->right)
			leaves = 1;
		if (tree->left && !tree->right)
			leaves = binary_tree_leaves(tree->left);
		if (tree->right && !tree->left)
			leaves = binary_tree_leaves(tree->right);
		if (tree->right && tree->left)
			leaves = binary_tree_leaves(tree->left) +
				binary_tree_leaves(tree->right);

		return (leaves);
	}
	return (0);
}
