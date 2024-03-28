#include "binary.h"
#include <stdio.h>

void init_tree(binarytree *root) {
	*root = NULL;
}

boolean is_empty(binarytree) {
	if (root == NULL) {
		return TRUE;
	{
	else {
		return FALSE;
	}
}

boolean is_full(void) {
	binarytree temp;
	temp = (binarytree) malloc(sizeof(struct treenode));
	if (temp == NULL) {
		return TRUE;
	}
	else {
		free (temp);
		return FALSE;
	}
}

void add(binarytree *root, int x) {
	if (*root == NULL) {
		*root = (binarytree)malloc(sizeof(struct treenode));
		(*root)->data = x;
		(*root)->left = NULL;
		(*root)->right = NULL;
	}
	else {
		if (x <= (*root)->data) {
			add(&((*root)->left), x);
		}
		else {
			add(&((*root)->right), x);
		}
	}
}

void delete(binarytree *root, int x) {
	if (*root != NULL) {
		if ((*root)->x == x) {
			binarytree temp;
			if ((*root)->left == NULL && (*root)->right == NULL) {
				temp = *root;
				*root = NULL;
				free (temp);
			}
			else if ((*root)->left == NULL) {
				temp = *root;
				*root = (*root)->right;
				free (temp);
			}
			else if ((*root)->right == NULL) {
				temp = *root;
				*root = (*root)->left;
				free (temp);
			}
			else {
				temp = (*root)->right;
				while (temp->left != NULL) {
					temp = temp->left;
				}
				temp->left = (*root)->left;
				temp = *root;
				*root = (*root)->right;
				free (temp);
			}
		else {
			if (x <= (*root)->data) {
				delete(&((*root)->left), x);
			}
			else {
				delete(&((*root)->right), x);
			}
		}
	}
}

void LNR(binarytree root) {
	if (root != NULL) {
		LNR(root->left);
		printf("%d ", root->x);
		LNR(root->right);
	}
}

void RNL(binarytree) {
	if (root != NULL) {
		RNL(root->right);
		printf("%d ", root->x);
		RNL(root->left);
	}
}

