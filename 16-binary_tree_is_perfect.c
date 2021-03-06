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

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of a tree to check
 * Return: tree is NULL, your function must return 0; 1 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: root of tree
 *
 * Return: 0 if not perfect, 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0)
		return (1);
	return (0);
}
