#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *@parent: pointer to the node to insert the left-child in
 *@value: the value to store in the new node
 *Return: newNode inserted
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
if (parent->left == NULL)
{
parent->left = newNode;
newNode->parent = parent;
}
else
{
aux = parent->left;
parent->left = newNode;
newNode->left = aux;
newNode->parent = parent;
aux->parent = newNode;
}
return (newNode);
}
