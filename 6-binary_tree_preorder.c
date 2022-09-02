#include"binary_trees.h"
/**
 * binary_tree_preorder - function that goes through a binary tree using
 * pre-order traversal
 * @tree: pointer to the root node
 * @func: pointer to a function to call for each node
 * Return: nothing
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
