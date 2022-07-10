#include<bits/stdc++.h>
using namespace std;
// #include "node.cpp"

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
void print(node *head){
	node* temp =head; //we use temporary pointer for keeping the head value as it is if it becomes null then traversing must be difficult
		while(temp!=NULL){

			cout<<temp->data<<" ";
			temp=temp->next;
		}
       cout<<endl;
	}
int main(){
	//statically
	node n1(3);
	node *head=&n1; //as we have to store address of node in head so datatype specified must be of node type it just stores address of node n1 which takes memory size as of pointer

	node n2(2);
	node n3(5);
	node n4(1);
	node n5(6);
    
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
    print(head);

    //dynamically
    node *d1=new node(1);	
    node *head1=d1;
    node *d2=new node(2);
    node *d3=new node(3);
    node *d4=new node(4);
    node *d5=new node(5);
    node *d6=new node(6);


    d1->next=d2;
    d2->next=d3;
    d3->next=d4;
    d4->next=d5;
    d5->next=d6;
    print(head1);
}	