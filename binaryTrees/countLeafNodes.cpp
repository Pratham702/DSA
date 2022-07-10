#include <bits/stdc++.h>
using namespace std;
template<typename T>
class binaryTreeNode{
public:
 	T data;
 	binaryTreeNode *left;
 	binaryTreeNode *right;

 	binaryTreeNode(T data){
 		this->data=data;
 		left=NULL;
 		right=NULL;
 	}
 	~binaryTreeNode(){
 		delete left;
 		delete right;
 	}

};
binaryTreeNode<int>* takeInput(){
	int rootData;
	cin>>rootData;
	if (rootData==-1)
	{
		return NULL;
	}

	binaryTreeNode<int> *root=new binaryTreeNode<int>(rootData);
	queue<binaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		binaryTreeNode<int>*front= pendingNodes.front();
		pendingNodes.pop();

		int leftData;
		cin>>leftData;
		if (leftData!=-1)
		{
			binaryTreeNode<int>* leftChild=new binaryTreeNode<int>(leftData);
			front->left=leftChild;
			pendingNodes.push(leftChild);

		}


		int rightData;
		cin>>rightData;
		if (rightData!=-1)
		{
			binaryTreeNode<int>* rightChild=new binaryTreeNode<int>(rightData);
			front->right=rightChild;
			pendingNodes.push(rightChild);
			
		}
	}
	return root;

}
void printLevelWiseTree(binaryTreeNode<int> * root){
	if (root==NULL)
	{
		return;
	}
	queue<binaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		binaryTreeNode<int>*front= pendingNodes.front();
		pendingNodes.pop();
		cout<<front->data<<":";
		if (front->left!=NULL)
		{
			cout<<"L"<<front->left->data;
			pendingNodes.push(front->left);

		}
		if (front->right!=NULL)
		{
			cout<<"R"<<front->right->data;
			pendingNodes.push(front->right);
			
		}

   cout<<endl;
	}
	
	
	
}
int countLeafNodes(binaryTreeNode<int>* root){
		if (root==NULL)
		{
			return 0;
		}
		if (root->right==NULL&&root->left==NULL)
		{
			return 1;
		}

		return countNodes(root->left)+countNodes(root->right);
}
int main(){

	binaryTreeNode<int> *root=takeInput();
	cout<<countNodes(root)<<endl;
	printLevelWiseTree(root);
	delete root;
}