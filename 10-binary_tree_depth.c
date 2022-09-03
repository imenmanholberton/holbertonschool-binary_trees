#include "binary_trees.h"
#define new_max(x, y) (((x) >= (y)) ? (x) : (y))
/**
 * binary_tree_depth - function that measures the depth
 * of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: measure the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree == NULL || tree->parent == NULL)
{
return (0);
}
return (binary_tree_depth(tree->parent) + 1);
}
