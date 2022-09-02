#include "binary_trees.h"
/**
 * @brief
 * 
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (func == NULL || tree == NULL)
{
return;
}
if (tree->left != NULL)
{
binary_tree_inorder(tree->left, func);
}
func(tree->n);
if (tree->right != NULL)
{
binary_tree_inorder(tree->right, func);
}
}
