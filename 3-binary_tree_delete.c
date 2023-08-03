#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * @tree: A pointer to parent node
 *
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	while (tree != NULL)
	{
		if (tree->left != NULL)
			binary_tree_delete(tree->left);
		if (tree->right != NULL)
			binary_tree_delete(tree->right);
		free(tree);
		tree = NULL;
	}
}
