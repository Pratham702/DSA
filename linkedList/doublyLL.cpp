#include<bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node *next,*prev;
  
	node(int data){
		this->data=data;
		next=NULL;
		prev=NULL;
	}
	void print(node *head){
	node* temp =head; 
		while(temp!=NULL){

			cout<<temp->data<<" ";
			temp=temp->next;
		}	
       cout<<endl;
	}
node* insertion(node* head, int i,int data){
	node* newNode=new node(data);
	node* temp=head;
	node* tail;
	while(i>0){
		tail=temp;
		temp=temp->next;
		i--;
	}
	
	if (temp==NULL)
	{   
		newNode->prev=tail;
		tail->next=newNode;

	}else if(temp->prev==NULL)
	{
		newNode->next=temp;
		temp->prev=newNode;
		return newNode; 
	}else{
		newNode->next=temp;
		newNode->prev=temp;
		temp->prev->next=newNode;
		temp->prev=newNode;
	}
	return head;

}
node* takeInput(){

		int data;
		cin>>data;
		node*head=NULL;
		node*tail =NULL;
		node*prev=NULL;
		while(data!=-1){
			node *newNode= new node(data);
			
		   if (head==NULL )
		   {
		   	head=newNode;
		   
		   	tail=newNode;
		   	
		   }
		   else
		   {
		   	node* temp;
		   	tail->next=newNode;
		   	temp=tail;
		   	tail=tail->next;
		   	tail->prev=temp;
 			}
			cin>>data;
		}
		return head;
	}
	
};

	

int main()
{   node *a;
	node* head=a->takeInput();
	int i,data;
	cin>>i>>data;
	node* head1=a->insertion(head,i,data);
	a->print(head1);
return 0;
}	