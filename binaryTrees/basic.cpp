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

	binaryTreeNode<int> *root=new binaryTreeNode<int>(1);
	binaryTreeNode<int> *node1=new binaryTreeNode<int>(3);
	binaryTreeNode<int> *node2=new binaryTreeNode<int>(2);
	root->left=node2;
	root->right=node1;

	printTree(root);
	delete root;
}