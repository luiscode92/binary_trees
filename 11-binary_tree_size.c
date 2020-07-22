#include "binary_trees.h"
/**
  *binary_tree_size - function that measurethe size of a tree
  *@tree: the tree
  *Return: the size of the tree
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	count += binary_tree_size(tree->left) + 1;
	count += binary_tree_size(tree->right);

	return (count);
}
