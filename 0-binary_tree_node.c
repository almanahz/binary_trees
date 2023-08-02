#include "binary_tree.h"

/**
 * binary_tree_node - create a new node with a value
 *
 * @parent: A pointer to parent node
 * @value: Value to be inserted in parent node
 *
 * Return: A newnode pointer to the parent node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	bst_t newnode = malloc(sizeof(binary_tree_s));
	if (newnode == NULL)
		return NULL
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}
