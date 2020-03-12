#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root -function that checks if a node is a root
 * @node: node root
 * Return: int
 */


int binary_tree_is_root(const binary_tree_t *node)

{
	if (!node)
	{
		return (0);

	}

	if (node->parent == NULL)
	{
		return (1);

	}
	else
	{
		return (0);
	}
}
