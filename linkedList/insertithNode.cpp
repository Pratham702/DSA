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
		node*tail =NULL;
		while(data!=-1){
			node *newNode= new node(data);
			
		   if (head==NULL )
		   {
		   	head=newNode;
		   	tail=newNode;
		   	
		   }
		   else
		   {
		   	tail->next=newNode;
		   	tail=tail->next;
 			}
			cin>>data;
		}
		return head;
	}
	node* insertNode(node* head,int i,int data){
		node* temp=head;
		int count=0;
		node *newNode= new node(data);
		if (i==0)
		{
			newNode->next=head;
			head=newNode;
			return head;
		}
		while(count<i-1 &&temp!=NULL){
			temp=temp->next;
			count++;
		}
		if (temp!=NULL)
		{
			node* newTemp=temp->next;
		temp->next=newNode;
		newNode->next=newTemp;
		}
		return head;
	}

int main()
{
	node* head=takeInput();
	head=insertNode(head,0,459);
	print(head);
return 0;
}	