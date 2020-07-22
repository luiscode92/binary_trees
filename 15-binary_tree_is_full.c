#include "binary_trees.h"
/**
  *binary_tree_is_full - function thath checks if a tree is full
  *@tree: the tree
  *Return: 1 if it is full, 0 otherwise
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int nodes_left, nodes_right;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);

	nodes_left = binary_tree_is_full(tree->left);
	nodes_right = binary_tree_is_full(tree->right);
	if (nodes_left == 0 || nodes_right == 0)
		return (0);
	return (1);
}

/**
 * binary_tree_is_leaf - Funtion that check if the node is a leaf.
 * @node: Node of the binary tree.
 * Return: Return 1 if is a leaf, if is not a leaf 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
