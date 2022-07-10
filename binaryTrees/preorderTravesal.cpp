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
void preTree(binaryTreeNode<int> * root){
	if (root==NULL)
	{
		return;
	}
	cout<<root->data;
	cout<<endl;
	preTree(root->left);
	preTree(root->right);
	
}
void postTree(binaryTreeNode<int> * root){
	if (root==NULL)
	{
		return;
	}
	
	postTree(root->left);
	postTree(root->right);
	cout<<root->data;
	cout<<endl;
}

int main(){

	binaryTreeNode<int> *root=takeInput();
	preTree(root);
	delete root;
}