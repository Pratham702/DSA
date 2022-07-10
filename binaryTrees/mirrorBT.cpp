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
void mirror(binaryTreeNode<int>* root){
	
	if (root==NULL)
	{
		return ;

	}

cout<<root->data<<endl;
// if (root->right!=NULL)
// {
// 	cout<<root->right->data<<" ";
// }
// if (root->left!=NULL)
// {
// 	cout<<root->left->data<<" ";
// }
cout<<endl;
	mirror(root->right);
	mirror(root->left);

	
}
int main(){

	binaryTreeNode<int> *root=takeInput();
	
	mirror(root);
	delete root;
}