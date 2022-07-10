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
		node*head;
		node*tail;
		if (data!=-1)
		{
			head=NULL;
		tail =NULL;
		}
		
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
	

int main()
{
	node* head=takeInput();
	node* temp=head;
	int count=1;
	if (temp==NULL)
	{
			cout<<count<<endl;
	}else if(temp->next!=NULL){
	while(temp->next!=NULL){
		temp=temp->next;
		count++;
	}
	cout<<count<<endl;
	}else{
		cout<<0<<endl;
	}

}	