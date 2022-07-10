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
int   findData(node *head,int data){
	node* temp =head; //we use temporary pointer for keeping the head value as it is if it becomes null then traversing must be difficult
		int i=0;
		while(temp!=NULL){
			if (temp->data==data)
			{
				return i;

			}
			i++;
			temp=temp->next;
			
		}	
		return -1;
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
	// int data;
	// cin>>data;
	
	

	// cout<<findData(head,data);
	print(head);
return 0;
}	