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

node* swapNodes(node* head,int a,int b){
	node* temp=head;
int m,n;
if (a>b)		
{
	m=a;
	n=b;
}else{
	m=b;
	n=a;
}

if (head==NULL||head->next==NULL)
{
	return head;
}

if (n==0&&m==1)
{   node* c1=temp;
	node* c2=c1->next;
	c1->next=c2->next;
	c2->next=c1;
 return c2;
}
else if (n==0&& m>1)
{
	node* t=head;
	node* c1=t;
	node* p2;
	int l=1;
	 while(t->next!=NULL&&l!=m)
     {
     	l++;
     	t=t->next;
     }
     p2=t;
     node* c2=p2->next;
     node* x2=c2->next;
     c2->next=c1->next;
     c1->next=x2;
     p2->next=c1;

return c2;

}else{
	node* p1;
	node* p2;

	int l1=1,l2=0;
     while(temp->next!=NULL&&l1!=n)
     {
     	l1++;
     	temp=temp->next;
     }

     p1=temp;
     node* c1;
     node* c2;
     c1=p1->next;

      while(temp->next!=NULL&&l2!=(m-n))
     {
     	l2++;
     	temp=temp->next;
     }
     p2=temp;
     c2=p2->next;
     p1->next=c2;
     p2->next=c1;
     node*x1 =c1->next;
     node*x2 =c2->next;
     c1->next=x2;
     c2->next=x1;
     return head;
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
	int m,n;
	cin>>m>>n;
	node* head1=swapNodes(head,m,n);
	print(head1);
}	