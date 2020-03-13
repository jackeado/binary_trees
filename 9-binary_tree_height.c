#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: binary tree
 * Return: size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)

{
	size_t leaf_l;
	size_t leaf_r;

	if (!tree)
		return (0);
	if (tree && tree->left)
		leaf_l = binary_tree_height(tree->left) + 1;
	else
		leaf_l = 0;
	if (tree && tree->right)
		leaf_r = binary_tree_height(tree->right) + 1;
	else
		leaf_r = 0;
	if (leaf_l >= leaf_r)
		return (leaf_l);
	else
		return (leaf_r);
}
