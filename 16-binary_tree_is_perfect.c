#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 *
 * Return: 0 if tree is NULL, 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;

	/* empty tree is considered perfect */
	if (tree == NULL)
		return (0);

	right_depth = binary_tree_depth(tree);
	left_depth = binary_tree_depth(tree);

	if (left_depth == right_depth)
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));

	return (0);
}
