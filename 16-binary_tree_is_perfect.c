#include "binary_trees.h"

/**
 * binary_tree_height_16 - measures the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: tree height
 */
size_t binary_tree_height_16(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height_16(tree->left);
	right_height = binary_tree_height_16(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (0); /* leaf node, return 0 */

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_size_16 - measures the size of a binary tree
 * @tree: pointer to the root node
 *
 * Return: size of the tree
 */
size_t binary_tree_size_16(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size_16(tree->left) +
			binary_tree_size_16(tree->right));
}

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

	left_height = binary_tree_height_16(tree->left);
	right_height = binary_tree_height_16(tree->right);

	if (left_height == right_height)
	{
		if (binary_tree_size_16(tree->left) ==
				binary_tree_size_16(tree->right))
		return (1);
	}

	return (0);
}
