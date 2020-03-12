#include <stdlib.h>
#include "binary_trees.h"

/**
 * *binary_tree_insert_right- function that creates a binary tree node right
 * @parent: parent of the tree
 * @value: value
 * Return: new node
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nodes_r;

	nodes_r = malloc(sizeof(binary_tree_t));
	if (nodes_r == NULL)
		return (NULL);
	if (!parent || !value)
		return (NULL);

	nodes_r->n = value;
	nodes_r->parent = parent;
	nodes_r->left = nodes_r->right = NULL;

	if (parent->right != NULL)
	{
		nodes_r->right = parent->right;
		nodes_r->right->parent = nodes_r;
	}
	nodes_r->parent = parent;
	parent->right = nodes_r;
	return (nodes_r);
}
