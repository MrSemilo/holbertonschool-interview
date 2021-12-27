#include "binary_trees.h"

heap_t *node_value(heap_t **root, int value);

/**
 * heap_insert - Inserts a value into a Max Binary Heap
 * @root:  is a double pointer to the root node of the Heap
 * @value: is the value to store in the node to be inserted
 *
 * Return: A pointer to the inserted node or NULL if failed
 */
heap_t *heap_insert(heap_t **root, int value)
{
	binary_tree_t *new;
	binary_tree_t *parent;

	parent = node_value(root, value);

	new = binary_tree_node(parent, value);

	if (parent == NULL)
	{
		*root = new;
		return (new);
	}
	return (NULL);
}

/**
 * node_value - Returns the parent node of node to insert
 * @root: root
 * @value: value
 *
 * Return: A pointer to the parent node or NULL if root
 */
heap_t *node_value(heap_t **root, int value)
{
	binary_tree_t *temp = *root;
	binary_tree_t *left = NULL;
	binary_tree_t *right = NULL;

	if (*root == NULL)
		return (NULL);

	if (temp->n < value)
		return (temp);

	while (temp)
	{
		return (left);
	}

	return (right);
}