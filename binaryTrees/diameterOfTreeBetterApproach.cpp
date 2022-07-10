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
pair<int,int> heightDiameter(binaryTreeNode<int>* root){
	if (root==NULL)
	{
		pair<int,int> p;
		p.first=0;
		p.second=0;
		return p;
	}
	pair<int,int> leftAns=heightDiameter(root->left);
	pair<int,int> rightAns = heightDiameter(root->right);
	int lh=leftAns.first;
	int ld=leftAns.second;
	int rh=rightAns.first;
	int rd=rightAns.second;

	int height = 1+ max(lh,rh);
	int diameter=max(lh+rh,max(ld,rd));
	pair<int,int> p;
	p.first=height;
	p.second=diameter;
	return p;

}
int main(){

	binaryTreeNode<int> *root=takeInput();
	pair<int,int> p=heightDiameter(root);
cout<<"height:"<<p.first<<endl;
cout<<"diameter:"<<p.second<<endl;
	printTree(root);
	delete root;
}