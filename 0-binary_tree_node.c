#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: parent of the tree
 * @value: value
 * Return: new node
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = new_node->right = NULL;
	if (!parent)
		parent = new_node;
	return (new_node);
}
