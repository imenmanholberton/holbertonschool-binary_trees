#include "binary_trees.h"
/**
 * @brief
 * 
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
int i = 0;
if (node ==  NULL)
{
return (0);
}
binary_tree_is_leaf(node->left);
if ((node->left == NULL) && (node->right == NULL))
{
i++;
}
return i;
}