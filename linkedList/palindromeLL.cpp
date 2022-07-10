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
node* reverseLL(node* head){
	
	if (head==NULL||head->next==NULL)
	{
			return head;
	}
	node* x=reverseLL(head->next);
	head->next->next=head;
	head->next =NULL;
	
	return x;
	
}
bool palindromeLL(node* head){
if (head==NULL||head->next==NULL)
{
	return true;
}
	node* h1=head;
	node* h2;
	node* temp=head;
	int l=lengthLL(head);
	if (l%2==0)
	{
		for (int i = 0; i < l/2-1; ++i)
	{
		temp=temp->next;

	}
	node* ex=temp;
	node* x =temp->next;
	ex->next=NULL;

	 h2=reverseLL(x);
	}else{
			for (int i = 0; i < l-1/2; ++i)
	{
		temp=temp->next;

	}
	node* ex =temp;
	node* x =temp->next;
	ex->next=NULL;

	 h2=reverseLL(x);
	}

	
	
	while(h1!=NULL&&h2!=NULL)
	{
		if (h1->data==h2->data)
		{
			h1=h1->next;
			h2=h2->next;
			
		}else{
			return false;
		}
	}
	return true;
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
	

	cout<<palindromeLL(head);
	
	
	
	
	
	
return 0;
}	