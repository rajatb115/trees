#include <stdio.h>
#include <stdlib.h>

struct BinaryTreeNode{
	int data;
	struct BinaryTreeNode * left;
	struct BinaryTreeNode * right;
};

struct BinaryTreeNode * NewNode(int data){
	struct BinaryTreeNode * node = (struct BinaryTreeNode *) malloc(sizeof(struct BinaryTreeNode));
	node -> data = data;
	node -> left = NULL;
	node -> right = NULL;
	return(node);
}

void PreOrder(struct BinaryTreeNode * root){
	if(root){
		printf("%d",root -> data);
		PreOrder (root -> left);
		PreOrder (root -> right);
	}
}

void main(){
	printf("its working\n");
	struct BinaryTreeNode* root = NewNode(1);
	root -> left = NewNode(2);
	root -> right = NewNode(3);
	root -> left -> left= NewNode(4);
	root -> left -> right= NewNode(5);
	root -> right -> left= NewNode(6);
	root -> right -> right= NewNode(7);
	PreOrder(root);
	printf("\n");
}