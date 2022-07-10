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
void  ithIndex(node *head,int i){
	node* temp =head; //we use temporary pointer for keeping the head value as it is if it becomes null then traversing must be difficult
		
		while(temp!=NULL && i!=0){

			
			temp=temp->next;
			i--;
		}	
		cout<<temp->data<<" ";
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
	

int main()

{
	node* head=takeInput();
	int i;
	cin>>i;
	node* temp=head;
	int count=1;

 if(temp->next!=NULL){
	while(temp->next!=NULL){
		temp=temp->next;
		count++;
	}
	
	}
	if (i+1>count)
	{
		cout<<"not found"<<endl;
	}

	ithIndex(head,i);
return 0;
}	