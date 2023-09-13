#include"Tree.h"
BinaryTreeNode* BuyNode(BinaryTreeType x)
{
	BinaryTreeNode* newnode = (BinaryTreeNode*)malloc(sizeof(BinaryTreeNode));
	if (newnode == NULL)
	{
		perror("BuyNode fail");
		return;
	}
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->x = x;
	return newnode;
}

void PreOrder(BinaryTreeNode* root)
{
	if (root == NULL)
	{
		printf("# ");
		return;
	}
	printf("%d ", root->x);
	PreOrder(root->left);
	PreOrder(root->right);
}
void InOrder(BinaryTreeNode* root)
{
	if (root == NULL)
	{
		printf("# ");
		return;
	}
	PreOrder(root->left);
	printf("%d ", root->x);
	PreOrder(root->right);

}
void PostOrder(BinaryTreeNode* root)
{
	if (root == NULL)
	{
		printf("# ");
		return;
	}
	PreOrder(root->left);
	PreOrder(root->right);
	printf("%d ", root->x);
}
int BinaryTreeNodeSize(BinaryTreeNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return BinaryTreeNodeSize(root->left) + BinaryTreeNodeSize(root->right) + 1;
}
int BinaryTreeNodeLeafSize(BinaryTreeNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return BinaryTreeNodeLeafSize(root->left) + BinaryTreeNodeLeafSize(root->right);
}
int BinaryTreeHeight(BinaryTreeNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	int leftHeight = BinaryTreeHeight(root->left);
	int rightHeight = BinaryTreeHeight(root->right);
	return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
}
int BinaryTreeNodeLevelKSize(BinaryTreeNode* root, int k)
{
	assert(k > 0);

	if (root == NULL)
		return 0;

	if (k == 1)
		return 1;

	return BinaryTreeNodeLevelKSize(root->left, k - 1)
		+ BinaryTreeNodeLevelKSize(root->right, k - 1);
}