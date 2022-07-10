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
node* eliminateDuplicates(node* head){
	node* t1=head;
	node* t2=t1->next;
	if (head==NULL)
	{
		return head;
	}
	while(t2!=NULL){
		if (t1->data==t2->data)
		{
			
			t2=t2->next;
			t1->next=t2;
		}else{
			t1=t1->next;
			t2=t2->next;

		}
	}
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
	
	node*head1=eliminateDuplicates(head);
	print(head1);
	
	
	
	
	
return 0;
}	