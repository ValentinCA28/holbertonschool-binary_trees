#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/* Original code from http://stackoverflow.com/a/13755911/5184480 */

/**
 * print_t - Stores recursively each level in an array of strings
 *
 * @tree: Pointer to the node to print
 * @offset: Offset to print
 * @depth: Depth of the node
 * @s: Buffer
 *
 * Return: length of printed tree after process
 */
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s)
{
	char b[6];
	int width, left, right, is_left, i;

	/* Si l'arbre est NULL, rien à afficher */
	if (!tree)
		return (0);
	/* Vérifier si ce nœud est un enfant gauche de son parent */
	is_left = (tree->parent && tree->parent->left == tree);
	/* Formater la valeur du nœud en chaîne (format: (XXX)) */
	width = sprintf(b, "(%03d)", tree->n);
	/* Traiter récursivement le sous-arbre gauche */
	left = print_t(tree->left, offset, depth + 1, s);
	/* Traiter récursivement le sous-arbre droit */
	right = print_t(tree->right, offset + left + width, depth + 1, s);
	/* Copier la valeur du nœud dans le buffer à la position appropriée */
	for (i = 0; i < width; i++)
		s[depth][offset + left + i] = b[i];
	/* Si c'est un enfant gauche, dessiner la ligne vers le parent */
	if (depth && is_left)
	{
		for (i = 0; i < width + right; i++)
			s[depth - 1][offset + left + width / 2 + i] = '-';
		s[depth - 1][offset + left + width / 2] = '.';
	}
	/* Si c'est un enfant droit, dessiner la ligne vers le parent */
	else if (depth && !is_left)
	{
		for (i = 0; i < left + width; i++)
			s[depth - 1][offset - width / 2 + i] = '-';
		s[depth - 1][offset + left + width / 2] = '.';
	}
	/* Retourner la largeur totale occupée par ce sous-arbre */
	return (left + width + right);
}

/**
 * _height - Measures the height of a binary tree
 *
 * @tree: Pointer to the node to measures the height
 *
 * Return: The height of the tree starting at @node
 */
static size_t _height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	/* Calculer la hauteur du sous-arbre gauche (si existant, sinon 0) */
	height_l = tree->left ? 1 + _height(tree->left) : 0;
	/* Calculer la hauteur du sous-arbre droit (si existant, sinon 0) */
	height_r = tree->right ? 1 + _height(tree->right) : 0;
	/* Retourner la hauteur maximale */
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_print - Prints a binary tree
 *
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	char **s;
	size_t height, i, j;

	/* Si l'arbre est NULL, rien à afficher */
	if (!tree)
		return;
	/* Calculer la hauteur de l'arbre */
	height = _height(tree);
	/* Allouer un tableau de chaînes (une par niveau) */
	s = malloc(sizeof(*s) * (height + 1));
	if (!s)
		return;
	/* Allouer chaque ligne du buffer */
	for (i = 0; i < height + 1; i++)
	{
		/* Allouer 255 caractères par ligne */
		s[i] = malloc(sizeof(**s) * 255);
		if (!s[i])
			return;
		/* Remplir la ligne avec des espaces */
		memset(s[i], 32, 255);
	}
	/* Remplir le buffer avec l'arbre */
	print_t(tree, 0, 0, s);
	/* Afficher chaque ligne */
	for (i = 0; i < height + 1; i++)
	{
		/* Supprimer les espaces de fin de ligne */
		for (j = 254; j > 1; --j)
		{
			if (s[i][j] != ' ')
				break;
			s[i][j] = '\0';
		}
		/* Afficher la ligne */
		printf("%s\n", s[i]);
		/* Libérer la mémoire de la ligne */
		free(s[i]);
	}
	/* Libérer le tableau de chaînes */
	free(s);
}
