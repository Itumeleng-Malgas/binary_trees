#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child.
 * @parent: pointer to parent node.
 * @value:  new node value.
 *
 * Return: pointer to new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	/* if parent has a right-child, new_node takes it's place */
	/* then, old right-child is set to right-child of new_node */
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	return (parent->right = new_node);
}
