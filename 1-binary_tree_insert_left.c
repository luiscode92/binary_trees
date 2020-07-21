#include "binary_trees.h"
/**
 *binary_tree_insert_left - function that inserts a node as the left-child of another node
 *@parent: parent node
 *@value: value of the node
 *Return: pointer to the created node 
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *rootNode = NULL;

	if (parent == NULL)
			return (NULL);
	rootNode = calloc(1, sizeof(binary_tree_t));
	if (rootNode == NULL)
			return (NULL);
	rootNode->parent = parent;
	rootNode->n = value;
	if (parent->left != NULL)
	{
		rootNode->left = parent->left;
		rootNode->left->parent = rootNode;
	}
	parent->left = rootNode;
	return (rootNode);
}
