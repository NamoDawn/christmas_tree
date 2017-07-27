#include "binary_trees.h"

/**
 * tree_height - gets height of a tree
 * @tree: root of the tree
 *
 * Return: max height of tree
 */
int tree_height(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left) + 1;
	right = tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}

/**
 * binary_tree_balance - finds balance factor of tree (h left - h right)
 * @tree: root of tree
 *
 * Return: balance of tree from root
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left;
	int right;

	left = tree_height(tree->left);
	right = tree_height(tree->right);
	return (left - right);
}
