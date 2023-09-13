#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>


typedef int BinaryTreeType;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BinaryTreeType x;
}BinaryTreeNode;
BinaryTreeNode* BuyNode(BinaryTreeType x);
void PreOrder(BinaryTreeNode* root);
void InOrder(BinaryTreeNode* root);
void PostOrder(BinaryTreeNode* root);
int BinaryTreeNodeSize(BinaryTreeNode* root);
int BinaryTreeNodeLeafSize(BinaryTreeNode* root);
