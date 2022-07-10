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

void deleteNodes(node* head,int m,int n){

if (head==NULL)
{
	return ;
}
if (head->next==NULL)
{
	if (m>=1)		
	{
		return;
	}else if (m==0&&n==1)
	{
	   head=NULL;
	}else{
		return;
	}
}
	node* t1=head;
	node* t2;
while(t1->next!=NULL&&t2->next!=NULL){
	int c1=1,c2=1;
     while(t1->next!=NULL&&c1!=m)
     {
     	c1++;
     	t1=t1->next;
     }
     t2=t1->next;
      while(t2->next!=NULL&&c2!=n)
     {
     	c2++;
     	t2=t2->next;
     }
     t1->next=t2->next;
     if (t2->next!=NULL)
     {
     t1=t2->next;
    
     }
       
		}
		t2->next=NULL;

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
	int m,n;
	cin>>m>>n;
	deleteNodes(head,m,n);
	print(head);
}	