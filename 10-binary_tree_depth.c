#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * @node: pointer to the node to measure the depth of
 * Return: type size_t or 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	int depth = 0;

	if (node == NULL)
		return (depth);

	while (node->parent != NULL)
	{
		depth += 1;
		node = node->parent;
	}
	return (depth);
}
