#include "binary_trees.h"
/**
 * @brief
 * 
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t a, b;
if (tree == NULL)
{
return (0);
}
a = tree->left ? binary_tree_depth(tree->left) + 1 : 0;
b = tree->right ?  binary_tree_depth(tree->right) + 1 : 0;
return (((a) > (b)) ? (a) : (b));
}
