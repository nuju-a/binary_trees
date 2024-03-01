#include "binary_trees.h"
/**
  *binary_tree_node - function that creates a new node
  *@parent: pointer to the parent node
  *@value: value to put in new node
  *Description: task 0
  *Return: return pointer to new node or NULL if fail
  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*declare pointer to new node and pointer for insertion*/
	binary_tree_t *new_node = NULL;

	/*Allocate memory*/
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	/*assign value or null to node*/
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);
}

