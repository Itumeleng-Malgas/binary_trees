#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 *
 * Return: 0 if tree is NULL or not perfect, 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* check if the left and right subtrees have the same height */
	if (left_height == right_height)
		return (1);

	return (0);
}
