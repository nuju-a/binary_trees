#inlcude "binary_trees.h"
/**
  *binary_tree_insert_left - function that insert the left node
  *@parent: pointer to the node to insert left child in
  *@value: value to store in the new node
  *Description: task 1
  *Return:  pointer to created node or NULL on failure of if parent is NULL
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/*DECLARE NEW NODE AND ASSIGN NODE*/
	binary_tree_t *left_node = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	left_node = malloc(sizeof(binary_tree_t));
	if (!left_node)
		return (NULL);
	/*INITIALIZE NEW NODE*/
	left_node->n = value;
	left_node->left = NULL;
	left_node->right = NULL;
	left_node->parent = parent;

	/*if parent already has a node*/
	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
	}
	parent->left = left_node;

	return (left_node);
}
