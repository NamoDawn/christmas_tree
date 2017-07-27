#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts node as right-child of a node
 * @parent: pointer to the node to insert the right-child in
 * @value:  value to store in the new node
 * return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right == NULL)
		parent->right = new_node;
	else
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
		parent->right = new_node;
	}
	return (new_node);
}
