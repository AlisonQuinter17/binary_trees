#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with 1 or 2 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			nodes = 1;
		return (nodes +
				binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right));
	}

	return (0);
}
