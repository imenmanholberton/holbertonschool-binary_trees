#include "binary_trees.h"
#define new_max(x, y) (((x) >= (y)) ? (x) : (y))
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
a =  binary_tree_depth(tree->left);
b =  binary_tree_depth(tree->right);
if(a > b)
return (a + 1);
else
return (b + 1);
}
