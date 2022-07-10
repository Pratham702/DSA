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
bool check(binaryTreeNode<int>* root){
	if (root==NULL)
	{
		return false;
	}

	if (root->data<root->left->data)
	{
		return true;
	}
	if (root->data>=root->right->data)
	{
		return true;
	}

	return check(root->left);
	return check(root->right);


	return false;
}
bool searchData(binaryTreeNode<int>* root,int k){

	if (root==NULL)
	{
		return false;
	}
	if (root->data==k)
	{
	return true;
	}

	if (k<root->data)
	{
		return searchData(root->left,k);
	}else{
		return searchData(root->right,k);
	}

}

int main(){

	binaryTreeNode<int> *root=takeInput();
	
	cout<<check(root);
	delete root;
}