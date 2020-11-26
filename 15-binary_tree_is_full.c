#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree:  a pointer to the root node of the tree to check
 * Return: 0 tree is NULL or not full or 1 if its full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
		/* 		xor (^): iguales(0), diferentes(1) */
		/* not 	xor (^): iguales(1), diferentes(0) */
		/* tree is doing an internar if inside the parenthesis */
		return
		(
			tree &&
			!(binary_tree_is_full(tree->left) ^
			binary_tree_is_full(tree->right))
		);
}
