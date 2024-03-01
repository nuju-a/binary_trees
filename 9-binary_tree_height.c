#include "binary_trees.h"
size_t height(const binary_tree_t *tree);
/**
 * binary_tree_height - measure height of tree
 * @tree: tree to measure
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (height(tree) - 1);
}
/**
 * height - measure height
 * @tree: tree to measure
 *
 * Return: height
 */
size_t height(const binary_tree_t *tree)
{
	size_t heightR, heightL;

	if (!tree)
		return (0);

	heightL = height(tree->left);
	heightR = height(tree->right);

	if (heightL > heightR)
		return (heightL + 1);
	else
		return (heightR + 1);
}
