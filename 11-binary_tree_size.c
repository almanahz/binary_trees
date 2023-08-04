#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: A pointer to the root node to measure the size
 *
 * Return: size of the tree, otherwise 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);
	size = tree->left ? 1 + binary_tree_size(tree->left) + (tree->right ?
			1 + binary_tree_size(tree->right) : size) : size;
	return (size);
}
