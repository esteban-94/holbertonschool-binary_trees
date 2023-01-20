#include "binary_trees.h"
/**
 * binary_tree_leaves - functions that counts the leaves in a binary tree
 * @tree: pointer to the rroot node of the tree
 * Return: the count of leaves, 0 if the tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
