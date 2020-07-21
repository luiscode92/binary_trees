#include "binary_trees.h"
/**
 *bynary_tree_node -function that creates a binary tree node
 *@parent: parent node
 *@value: value
 *Return: new node 
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *rootNode = NULL;

  rootNode = calloc(1, sizeof(binary_tree_t));
  if (rootNode == NULL)
	  return (NULL);
  rootNode->parent = parent;
  rootNode->n = value;
  rootNode->left = NULL;
  rootNode->right = NULL;
  return (rootNode);
}
