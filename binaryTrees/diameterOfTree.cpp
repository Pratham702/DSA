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
void printTree(binaryTreeNode<int> * root){
	if (root==NULL)
	{
		return;
	}
	cout<<root->data<<":";
	if (root->left!=NULL)
	{
		cout<<"L"<<root->left->data<<",";
	}
	if (root->right!=NULL)
	{
		cout<<"R"<<root->right->data;
	}
	cout<<endl;
	printTree(root->left);
	printTree(root->right);
}

int height(binaryTreeNode<int>* root){
	
	if (root==NULL)
	{
		return 0;

	}
return 1+max(height(root->left),height(root->right));
	
}
int diameter(binaryTreeNode<int>* root){
	if (root==NULL)
	{
		return 0;
	}

	int option1=height(root->left)+height(root->right);
	int option2=diameter(root->left);
	int option3=diameter(root->right);
	return 1+max(option1,max(option3,option2));
}
int main(){

	binaryTreeNode<int> *root=takeInput();
	
cout<<diameter(root)<<endl;
	printTree(root);
	delete root;
}