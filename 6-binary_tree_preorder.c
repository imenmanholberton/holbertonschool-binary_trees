#include"binary_trees.h"
/**
 * @brief
 * 
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (func == NULL || tree == NULL)
{
return;
}
func(tree->n);
if (tree->left != NULL)
{
binary_tree_preorder(tree->left, func);
}
if (tree->right != NULL)
{
binary_tree_preorder(tree->right, func);
}
}