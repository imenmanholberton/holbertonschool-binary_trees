#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent:  pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: newNode inserted
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;
binary_tree_t *aux;
if (parent == NULL)
return (NULL);
newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
if (newNode == NULL)
return (NULL);
newNode->n = value;
newNode->left = NULL;
newNode->right = NULL;
if (parent->right == NULL)
{
parent->right = newNode;
newNode->parent = parent;
}
else
{
aux = parent->right;
parent->right = newNode;
newNode->right = aux;
newNode->parent = parent;
aux->parent = newNode;
}
return (newNode);
}
