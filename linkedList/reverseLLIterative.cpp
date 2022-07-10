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
	
	node* reverseLL(node* head){
	node* prev=NULL;
	node* curr=head;
	node* forward=NULL;
	if (head==NULL||head->next==NULL)
	{
			return head;
	}
	while(curr!=NULL){
		 forward=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forward;
	}
	
	return prev;
	
}
int lengthLL(node* head){
		if (head==NULL)
		{
			return 0;
		}
		else
		{

			return lengthLL(head->next)+1;
		}
		
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
	void print(node *head){
	node* temp =head; //we use temporary pointer for keeping the head value as it is if it becomes null then traversing must be difficult
		while(temp!=NULL){

			cout<<temp->data<<" ";
			temp=temp->next;
		}	
       cout<<endl;
	}

};


int main()

{
	node *a;
	node* head=a->takeInput();
	

	node* head1=a->reverseLL(head);
	a->print(head1);
	
	
	
	
	
return 0;
}	