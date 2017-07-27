#include "binary_trees.h"
/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node:  pointer to the node to find the uncle of
 * Return: pointer to uncle node or NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left &&
	    node->parent->parent->right != NULL)
		return (node->parent->parent->right);
	else if (node->parent == node->parent->parent->right &&
		 node->parent->parent->left != NULL)
		return (node->parent->parent->left);
	else
		return (NULL);
}
