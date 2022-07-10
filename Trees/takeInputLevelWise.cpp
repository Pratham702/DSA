#include <bits/stdc++.h>
using namespace std;

template <typename T>
class treeNode{
public:
	T data;
    vector<treeNode*> children;//vector<treeNode<T>*> children;

    treeNode(T data){
    	this->data=data;

    }
    ~treeNode(){
    	for (int i = 0; i < children.size(); ++i)
    	{
    		delete children[i];
    	}
    }

};
treeNode<int>* takeInputLevelWise(){
	int rootData;
	// cout<<"enter root data:"<<endl;
	cin>>rootData;
	treeNode<int> * root=new treeNode<int>(rootData);
	queue<treeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		treeNode<int>* front=pendingNodes.front();
		pendingNodes.pop();
 	int numChild;
	// cout<<"enter no of children"<<front->data<<endl;
	cin>>numChild;
	for (int i = 0; i < numChild; ++i)
	{
		int childData;
		// cout<<"enter"<<i<<"th child of "<<front->data<<endl;
		cin>>childData;
		treeNode<int> * child=new treeNode<int>(childData);
		front->children.push_back(child);
		pendingNodes.push(child);
	}
	}
	

	
   return root;
}
void printTreePost(treeNode<int>* root){
	if (root==NULL)
	{
		return;
	}
	
	for (int i = 0; i < root->children.size(); ++i)
	{
		printTreePost(root->children[i]);
	}
cout<<root->data<<endl;
}
int height(treeNode<int> * root){
	int h=1;
	for (int i = 0; i < root->children.size(); ++i)
	{
		if (height(root->children[i])!=0)
		{
			h++;
		}
	}
	return h;
}

void deptNode(treeNode<int> * root,int k){
	if (root==NULL)
	{
		return;
	}
	if(k==0){
		cout<<root->data<<endl;
	}
    for (int i = 0; i < root->children.size(); ++i)
    {
    	deptNode(root->children[i],k-1);
    }
}
int countLeafNodes(treeNode<int> * root){
	if (root==NULL)
	{
		return 0;
	}
	if (root->children.size()==0)
		{
		return 1;	
		}
	int ans=0;
	for (int i = 0; i < root->children.size(); ++i)
	{
		ans+=countLeafNodes(root->children[i]);
		
	}
	return ans;
}
int countNodes(treeNode<int> * root){
	if (root==NULL)
	{
		return 0;
	}
	int ans=1;
	for (int i = 0; i < root->children.size(); ++i)
	{
		ans+=countNodes(root->children[i]);
	}
	return ans;
}
int sumNodes(treeNode<int>* root){
	if (root==NULL)
	{
		return 0;
	}
	int ans=root->data;
	int max=ans;
	for (int i = 0; i < root->children.size(); ++i)
	{
		if (ans>max)
		{
			max=ans;
		}
		ans+=sumNodes(root->children[i]);

	}
	return ans;

}
void printTree(treeNode<int>* root){
	if (root==NULL)
	{
		return;
	}
	cout<<root->data<<":";
	for (int i = 0; i < root->children.size(); ++i)
	{
		cout<<root->children[i]->data<<",";
	}
	cout<<endl;
	for (int i = 0; i < root->children.size(); ++i)
	{
		printTree(root->children[i]);
	}
}
void deleteNodes(treeNode<int>* root){
	for (int i = 0; i < root->children.size(); ++i)
	{
		delete root->children[i];
	}
	delete root;
}
int main(){

	treeNode<int> * root=takeInputLevelWise();
	// cout<<countLeafNodes(root)<<endl;
	// printTree(root);
	// deptNode(root,2);
	printTreePost(root);
	delete root;//or we can make function for deleting all nodes and it will be carry out using postorder traversal
	// deleteNodes(root);
		printTreePost(root);

}