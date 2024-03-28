#ifndef BINARY_H
#define BINARY_H
typedef struct treenode {
	int data;
	struct treenode *left, *right;
} binarytree;
void init_tree(binarytree *);
boolean is_empty(binarytree);
boolean is_full(void);
void add(binarytree *, int);
void delete_tree(binarytree *, int);
void LNR(binarytree);
void RNL(binarytree);
#endif
