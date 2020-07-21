#include "binary_trees.h"

/**
 * binary_tree_delete - function that delete the tree in a recurison way
 * @tree: th tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
