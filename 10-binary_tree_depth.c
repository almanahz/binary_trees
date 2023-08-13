#include "binary_trees.h"
/**
 * binary_tree_depth - depth of specified node from root
 * @tree: node to check the depth
 * Return: 0 if it is the root/tree is NULL or number of depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (++depth);
	depth += binary_tree_depth(tree->left) + binary_tree_depth(tree->right);
	return (depth);
}
