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

node* evenAfterOdd(node* head){

if (head==NULL||head->next==NULL)
{
	return head;
}
       
		node* ohead=NULL;
		node* otail=NULL;
		node* ehead=NULL;
		node* etail=NULL;
while(head!=NULL){
		

		if ((head->data)%2!=0)
		{
			if (ohead==NULL)
			{
				ohead=head;
				otail=head;
			}else{

				otail->next=head;
				otail=otail->next;
			}
		}else{
			if (ehead==NULL)
			{
				ehead=head;
				etail=head;
			}else{

				etail->next=head;
				etail=etail->next;
			}
		}
		head=head->next;

}
	otail->next=NULL;
	etail->next=NULL;


		if (ohead==NULL)
		{
			return ehead;
		}else{
			otail->next=ehead;
		return ohead;
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
int main(){
	node* head=takeInput();
	node* head1=evenAfterOdd(head);
	print(head1);
}	