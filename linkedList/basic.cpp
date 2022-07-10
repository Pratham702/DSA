#include<bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node *next;

	node(int data){
		this->data=data;
		next=NULL;
	}
	
	
};
int main(){
	//statically
	node n1(3);
	node *head=&n1; //as we have to store address of node in head so datatype specified must be of node type it just stores address of node n1 which takes memory size as of pointer

	node n2(2);

	cout<<n1.data<<" "<<n2.data<<endl;

	n1.next=&n2;//connection of two nodes
	cout<<head->data;//cout<<(*head).data;//both are same
	//dynamically
	node *n3=new node(10);
	node *head =n3;

	node *n4=new node(5);

	n3->next=n4;//connection of two nodes dynamically
}	