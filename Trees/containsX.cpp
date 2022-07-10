#include<bits/stdc++.h>
using namespace std;

template<typename T>
class treeNode{
public:
	T data;
	vector<treeNode<T>*> children;

	treeNode(T data){
		this->data=data;
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

bool containX(treeNode<int>* root,int x){
	if (root==NULL)
	{
		return 0;
	}
	if (root->data==x)
	{
		return true;
	}

	for (int i = 0; i < root->children.size(); ++i)
	{
		return containX(root->children[i],x);
	}
	return false;
}
int main(){

	treeNode<int>* root=takeInputLevelWise();
	int x;
	cin>>x;
	cout<<containX(root,x);
}
