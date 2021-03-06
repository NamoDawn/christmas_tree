#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: return a pointer to the lowest common ancestor node of the nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *moving;

	moving = first;

	while (second != NULL)
	{
		second = second->parent;
		while (moving != NULL)
		{
			if (moving == second)
				return ((binary_tree_t *)second);
			moving = moving->parent;
		}
		moving = first;
	}
	return (NULL);
}
