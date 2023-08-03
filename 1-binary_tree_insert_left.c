#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as left-child of the parent node
 * @parent: pointer to the parent node of binary_tree_t
 * @value: the new added node copies value n passed in the parameter
 * Return: the address of the new node or NULL if it fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *add;

	if (parent == NULL)
		return (NULL);
	add = malloc(sizeof(binary_tree_t));
	if (add == NULL)
		return (NULL);
	add->n = value;
	add->parent = parent;
	add->right = NULL;
	if (parent->left == NULL)
	{
		add->left = NULL;
		parent->left = add;
	}
	else
	{
		add->left = parent->left;
		parent->left = add;
	}
	return (add);
}
