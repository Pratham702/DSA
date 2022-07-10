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
node* append(node *head,int i){
	node* temp =head; 
	node* temp1=head;
	node* temp2=head;
		while(temp!=NULL&&i>1){

			temp=temp->next;
			i--;
		}
		temp2=temp;
		head=temp->next;
		
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=temp1;
		temp2->next=NULL;
		return head;	
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


int main()

{
	node* head=takeInput();
	int i;
	cin>>i;
	
	
	int count=lengthLL(head);
	
	node* head1=append(head,count-i);
	print(head1);
return 0;
}	