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
bool palindromeLL(node* head,int l){
if (head==NULL||head->next==NULL)
	{
			return true;
	}
	node* temp=head;
	for (int i = 0; i < l-1; ++i)
	{
		temp=temp->next;
	}
		
	
	node* tail =temp;
	if (head->data==tail->data)
	{
		return palindromeLL(head->next,l-2);
	}else{
		return false;
	}
	
	
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
	int l=lengthLL(head);

	cout<<palindromeLL(head,l);
	
	
	
	
	
	
return 0;
}	