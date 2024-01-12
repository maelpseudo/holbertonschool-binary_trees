# Projet Arbres Binaires

Ce projet consiste en une série d'exercices sur les arbres binaires en C. Chaque fichier source contient des fonctions pour manipuler ou interroger des structures d'arbres binaires.

## Fichiers

- `0-binary_tree_node.c` : Crée un nœud d'arbre binaire.
- `1-binary_tree_insert_left.c` : Insère un nœud comme enfant gauche d'un autre nœud.
- `2-binary_tree_insert_right.c` : Insère un nœud comme enfant droit d'un autre nœud.
- `3-binary_tree_delete.c` : Supprime un arbre binaire entier.
- `4-binary_tree_is_leaf.c` : Vérifie si un nœud est une feuille.
- `5-binary_tree_is_root.c` : Vérifie si un nœud est la racine.
- `6-binary_tree_preorder.c` : Parcourt un arbre binaire en pré-ordre.
- `7-binary_tree_inorder.c` : Parcourt un arbre binaire en in-ordre.
- `8-binary_tree_postorder.c` : Parcourt un arbre binaire en post-ordre.
- `9-binary_tree_height.c` : Mesure la hauteur d'un arbre binaire.
- `10-binary_tree_depth.c` : Mesure la profondeur d'un nœud dans un arbre binaire.
- `11-binary_tree_size.c` : Calcule la taille d'un arbre binaire.
- `12-binary_tree_leaves.c` : Compte les feuilles dans un arbre binaire.
- `13-binary_tree_nodes.c` : Compte les nœuds avec au moins 1 enfant dans un arbre binaire.
- `14-binary_tree_balance.c` : Mesure le facteur d'équilibre d'un arbre binaire.
- `15-binary_tree_is_full.c` : Vérifie si un arbre binaire est plein.
- `16-binary_tree_is_perfect.c` : Vérifie si un arbre binaire est parfait.
- `17-binary_tree_sibling.c` : Trouve le frère d'un nœud.
- `18-binary_tree_uncle.c` : Trouve l'oncle d'un nœud.
- `binary_trees.h` : Header file contenant les prototypes de toutes les fonctions et la structure de base d'un nœud d'arbre binaire.

## Utilisation

Chaque fichier peut être compilé avec `gcc` et exécuté pour tester son fonctionnement. Par exemple, pour tester `0-binary_tree_node.c`, vous pouvez utiliser une commande de compilation comme celle-ci :

```bash
gcc -Wall -Wextra -Werror -pedantic 0-binary_tree_node.c -o binary_tree_node
