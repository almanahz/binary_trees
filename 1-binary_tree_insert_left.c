#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a new node as the left-child of the parent node
 * @parent: pointer to the parent node of binary_tree_t
 * @value: the new added node copies value n passed in the parameter
 * Return: the address of the new node or NULL if it fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *add;

	if (parent == NULL)
		return (NULL);
	add = malloc(sizeof(parent));
	if (add == NULL)
		return (NULL);
	add->n = value;
	add->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = add;
		add->left = NULL;
	}
	else
	{
		binary_tree_t *tmp = parent->left;
		parent->left = add;
		add->left = tmp;
	}
	return (add);
}
