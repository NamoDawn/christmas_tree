#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts node as left-child of a node
 * @parent: pointer to the node to insert the left-child in
 * @value:  value to store in the new node
 * return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return(NULL);

	if (parent->left == NULL)
	{
		parent->left = new_node;
	}
	else
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
		parent->left = new_node;
	}
	return (new_node);
}
