#include"Tree.h"
BinaryTreeNode* InitBinaryTree()
{
	BinaryTreeNode* node1 = BuyNode(1);
	BinaryTreeNode* node2 = BuyNode(2);
	BinaryTreeNode* node3 = BuyNode(3);
	BinaryTreeNode* node4 = BuyNode(4);
	BinaryTreeNode* node5 = BuyNode(5);
	BinaryTreeNode* node6 = BuyNode(6);
	BinaryTreeNode* node7 = BuyNode(7);
	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;
	return node1;
}
int main()
{
	BinaryTreeNode* root = InitBinaryTree();
	PreOrder(root);
	printf("\n");
	
	InOrder(root);
	printf("\n");

	PostOrder(root);
	printf("\n");
	
	printf("%d ", BinaryTreeNodeSize(root));
	printf("\n");

	printf("%d ", BinaryTreeNodeLeafSize(root));
	printf("\n");
	return 0;
}