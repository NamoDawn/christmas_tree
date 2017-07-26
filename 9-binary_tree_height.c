#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the height of
 * Return: tree is NULL, your function must return 0, otherwise 1
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}
