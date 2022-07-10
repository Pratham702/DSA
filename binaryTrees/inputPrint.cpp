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
	binaryTreeNode<int> *leftChild=takeInput();
	binaryTreeNode<int> *rightChild=takeInput();
	root->left=leftChild;
	root->right=rightChild;

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

int main(){

	binaryTreeNode<int> *root=takeInput();
	printTree(root);
	delete root;
}