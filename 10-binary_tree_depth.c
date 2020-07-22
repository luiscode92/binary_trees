#include "binary_trees.h"
/**
  *binary_tree_depth - functio depth binary tree
  *@tree: the tree
  *Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		count = binary_tree_depth(tree->parent) + 1;
	return (count);
}
