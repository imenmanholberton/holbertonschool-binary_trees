#include "binary_trees.h"
#define new_max(x, y) (((x) >= (y)) ? (x) : (y))
/**
 * @brief
 * 
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree == NULL ||  tree->parent == NULL)
{
return (0);
}

return (binary_tree_depth(tree->parent) + 1);
}
