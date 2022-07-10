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
void print(node *head){
	node* temp =head; //we use temporary pointer for keeping the head value as it is if it becomes null then traversing must be difficult
		while(temp!=NULL){

			cout<<temp->data<<" ";
			temp=temp->next;
		}	
       cout<<endl;
	}

	node* takeInput(){

		int data;
		cin>>data;
		node*head=NULL;
		while(data!=-1){
			node *newNode= new node(data);
		   if (head==NULL)
		   {
		   	head=newNode;
		   }
		   else
		   {
		   	node *temp=head;
		   	while(temp->next!=NULL){
		   		temp=temp->next;	
		   	}
		   	temp->next=newNode;
 			}
			cin>>data;
		}
		return head;
	}
int main(){
	node* head=takeInput();
	print(head);
}	