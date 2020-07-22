#include "binary_trees.h"
/**
  *binary_tree_balance - fucntion that measure the balance of a tree
  *@tree: the tree
  *Return: balance factor
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}


/**
  *binary_tree_height - function that measure the heightof  tree
  *@tree: th tree
  *Return: tree height
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0;
	size_t h_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		h_left =  binary_tree_height(tree->left);
	if (tree->right)
		h_right =  binary_tree_height(tree->right);

	if (h_left > h_right)
		return (1 + h_left);
	else
		return (1 + h_right);
}
