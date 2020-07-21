#include "binary_trees.h"
/**
 *binary_tree_insert_right - function inserts a node as the right-child
 *@parent: parent node
 *@value: value of the node
 *Return: pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rootNode = NULL;

	if (parent == NULL)
		return (NULL);
	rootNode = calloc(1, sizeof(binary_tree_t));
	if (rootNode == NULL)
		return (NULL);
	rootNode->parent = parent;
	rootNode->n = value;
	if (parent->right != NULL)
	{
		rootNode->right = parent->right;
		rootNode->right->parent = rootNode;
	}
	parent->right = rootNode;
	return (rootNode);
}
