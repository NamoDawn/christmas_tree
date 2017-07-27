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

/**
 * binary_tree_is_leaf -function that checks if a node is a leaf
 * @node: a pointer to the node to check
 * return: 1 if node is a leaf, and 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}

/**
 * binary_tree_depth - measures the depth of a node
 * @node: pointer to the node to measure the depth of
 * Return: type size_t or 0 if NULL 
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	int depth = 0;

	if (node == NULL)
		return(depth);

	while(node->parent != NULL)
	{
		depth +=1;
		node = node->parent;
	}
	return(depth);
}

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node:  pointer to the node to find the sibling of
 * Return: pointer to sibling node or NULL if no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return(node->parent->right);
	return(node->parent->left);
}

int full_check(binary_tree_t *tree, int height, int flag)
{
	binary_tree_t *sibling;
	int result;

	result = 0;
	if (tree == NULL || ((int)binary_tree_depth(tree) != height && binary_tree_is_leaf(tree)))
		return (1);

	full_check(tree->left, height, 1);
	
	if (flag)
	{
		sibling = binary_tree_sibling(tree);
		result = full_check(sibling, height, 0);
	}

	return (result);
}
/**
 * binary_tree_is_complete - checks if tree is complete
 * @tree: root of tree
 *
 * Return: 0 if not complete, 1 if complete
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int height;
	int result;

	height = binary_tree_height(tree);
	result = full_check((binary_tree_t *)tree, height, 1);

	if (result > 0)
		return (0);
	return (1);
}
