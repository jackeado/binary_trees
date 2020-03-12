#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that creates a binary tree node left
 * @parent: parent of the tree
 * @value: value
 * Return: new node
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)

{
	binary_tree_t *nodes_l;

	nodes_l = malloc(sizeof(binary_tree_t));
	if (nodes_l == NULL)
		return (NULL);
	if (!parent || !value)
		return (NULL);

	nodes_l->n = value;
	nodes_l->parent = parent;
	nodes_l->left = nodes_l->right = NULL;

	if (parent->left != NULL)
	{
		nodes_l->left = parent->left;
		nodes_l->left->parent = nodes_l;
	}
	nodes_l->parent = parent;
	parent->left = nodes_l;
	return (nodes_l);
}
