#include "binary_trees.h"
/**
  *binary_tree_leaves - function that counts the leaves of a tree
  *@tree: the tree
  *Return: number of the leave number of the leaves
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count1 = 0;
	size_t count2 = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	count1 = binary_tree_leaves(tree->left);
	count2 = binary_tree_leaves(tree->right);
	return (count1 + count2);
}
