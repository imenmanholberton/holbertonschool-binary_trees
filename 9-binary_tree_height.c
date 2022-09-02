#include "binary_trees.h"
#define new_max(x, y) (((x) >= (y)) ? (x) : (y))
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: heightof a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t a, b;
if (tree == NULL)
return (0);
a = tree->left ? binary_tree_height(tree->left) + 1 : 0;
b = tree->right ?  binary_tree_height(tree->right) + 1 : 0;
return (((a) > (b)) ? (a) : (b));
}
