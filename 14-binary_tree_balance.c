#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: heightof a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t l, r;
if(tree == NULL)
return (0);
l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
return ((l) > (r) ? (l)  : (r));
}

int binary_tree_balance(const binary_tree_t *tree)
{
if(tree == NULL)
return (0);
return (binary_tree_height(tree->left) -  binary_tree_height(tree->right));
}