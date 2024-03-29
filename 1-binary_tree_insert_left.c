#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the left-cild of
 * another code
 * @parent: is a pointer to the node to insert to the left-child
 * @value: is the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure or if parent is
 * NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;
	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);
}
