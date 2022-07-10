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
pair<int,int> rootChild(treeNode<int>* root){
	if (root==NULL)
	{
		return {0,0};
	}
	
	int sum=root->data;
	for (int i = 0; i < root->children.size(); ++i)
	{
		sum+=root->children[i]->data;
	}
	pair<int,int> p;
	int ans=sum;
	p.first=sum;
	p.second=root->data;
         return p;

	
}
pair<int,int> maxChild(treeNode<int>* root){
	if (root==NULL)
	{
		return {0,0};
	}
	int sum=root->data;
	for (int i = 0; i < root->children.size(); ++i)
	{
		sum+=root->children[i]->data;
	}
	
	int ans=sum;
	
pair<int,int> p1;
	for (int i = 0; i < root->children.size(); ++i)
	{
		p1= rootChild(root->children[i]);
		if (p1.first>ans)	
		{
			ans=p1.first;
			p1.second=root->children[i]->data;
		}
	}
	
	return p1;
}
int main(){

	treeNode<int>* root=takeInputLevelWise();

	cout<<maxChild(root).second;
}
