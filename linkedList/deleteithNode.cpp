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
	node* deleteNode(node* head,int i){
		node* temp=head;
		int count=0;
		if (i==0)
		{
			head=head->next;
			return head;
		}
		while(count<i-1){
			temp=temp->next;
			count++;
		}
		node* a=temp->next;
		a=a->next;
		temp->next=a;
		return head;
	}

int main()
{
	node* head=takeInput();
	head=deleteNode(head,3);
	print(head);
return 0;
}	