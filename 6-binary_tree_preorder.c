#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - func that goes through a binary tree using pre-order
 * @tree: tree for order
 * @func: value of node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))

{
	if (!tree)
		return;
	if (!func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
