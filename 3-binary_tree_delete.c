#include "binary_trees.h"
/**
 * @brief
 * 
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
{
return;
}
if (tree->left)
{
binary_tree_delete(tree->left);
free(tree->left);
}
if (tree->right)
{
binary_tree_delete(tree->right);
free(tree->right);
}
}