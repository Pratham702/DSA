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
};

int main(){

	treeNode<int> *root=new treeNode<int>(1);
	treeNode<int> *node1=new treeNode<int>(2);
	treeNode<int> *node2=new treeNode<int>(3);
	treeNode<int> *node3=new treeNode<int>(4);
	treeNode<int> *node4=new treeNode<int>(5);
	treeNode<int> *node5=new treeNode<int>(6);
	treeNode<int> *node6=new treeNode<int>(7);
	treeNode<int> *node7=new treeNode<int>(8);
	root->children.push_back(node1);
	root->children.push_back(node2);
	root->children.push_back(node3);
	node1->children.push_back(node4);
	node1->children.push_back(node5);
	node2->children.push_back(node6);
	node3->children.push_back(node7);
cout<<root->data<<":"<<root->children[0]->data<<","<<root->children[1]->data<<","<<root->children[2]->data<<endl;
cout<<node1->data<<endl;
}