#include "binary_trees.h"
/**
 * binary_tree_depth - funciton that measures the depth of a node in binary
 * @tree: is a pointer to the node to measure the depth
 * Return: the depth of a node or 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
#include "binary_trees.h"

/**
 * binary_tree_depth -  measures the depth of a node in a binary tree
 *
 * @tree: pointer to the node to measure the depth
 *
 * Return: Depth. 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
