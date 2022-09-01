#include "binary_trees.h"
/**
 * @brief
 *
 *
 */
binary_tree_t *newNode(int value)
{
binary_tree_t *res;
res =(binary_tree_t  *) malloc(sizeof(binary_tree_t));
res->n= value;
res->left = res->right = NULL;
return res;
}
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
if (parent == NULL)
return newNode(value);
if(value < parent->n)
parent->left = binary_tree_insert_left(parent->left, value);
else
parent->right = binary_tree_insert_left(parent->right, value);
return parent;
}
