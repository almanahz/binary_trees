#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as right-child of the parent node
 * @parent: pointer to the parent node of binary_tree_t
 * @value: the new added node copies value n passed in the parameter
 * Return: the address of the new node or NULL if it fails
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *add;

	if (parent == NULL)
		return (NULL);
	add = malloc(sizeof(binary_tree_t));
	if (add == NULL)
		return (NULL);
	add->n = value;
	add->parent = parent;
	add->left = NULL;
	if (parent->right == NULL)
	{
		add->right = NULL;
		parent->right = add;
	}
	else
	{
		add->right = parent->right;
		add->right->parent = add;
		parent->right = add;
	}
	return (add);
}
