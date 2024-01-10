#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Définition de la structure pour un nœud d'arbre binaire */
typedef struct binary_tree_s
{
        int n;
        struct binary_tree_s *parent;
        struct binary_tree_s *left;
        struct binary_tree_s *right;
} binary_tree_t;

/* Prototype de la fonction pour créer un nœud d'arbre binaire */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *tree);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
int binary_tree_is_leaf(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

#endif /* BINARY_TREES_H */
