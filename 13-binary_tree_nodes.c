#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count + (!binary_tree_is_leaf(tree)));
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
