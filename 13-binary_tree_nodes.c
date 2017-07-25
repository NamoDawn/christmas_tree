#include "binary_trees.h"

/**
 * binary_tree_nodes - checks how many nodes have 1 or more childs in a tree
 * @tree: root of the tree
 *
 * Return: count of how many nodes have 1 or more childs
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
