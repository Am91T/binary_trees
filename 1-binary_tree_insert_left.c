#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *current;

    if (parent == NULL)
        return NULL;

    current = binary_tree_node(parent, value);

    if (current == NULL)
        return NULL;

    if (parent->left != NULL)
    {
        current->left = parent->left;
        parent->left->parent = current;
    }
    parent->left = current;
    return (current);
}