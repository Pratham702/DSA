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
	
node* swapNodes(node* head){
	node* temp=head;


if (head==NULL||head->next==NULL)
{
	return head;
}


  node* c1=temp;
	node* c2=c1->next;
	c1->next=c2->next;
	c2->next=c1;
 return c2;


 }
       
		
		

}
void bubbleSort(node* head){
	int size =lengthLL(head);
	node* temp=head;
	   for (int i = 1; i <=size; ++i)
    {
    	bool swapped=false;
        for(int j=0;j<size-i;j++){

        if (temp->next->data>temp->data)
        {
           swapNodes(temp);
                swapped=true;
        }
        temp=temp->next;
    }
    if (swapped==false)
    {	
    	break;//hence we optimised code for already sorted array to O(n)
    }
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
};



int main()

{
	node *a;
	node* head=a->takeInput();
	

	node* head1=a->bubbleSort(head);
	a->print(head1);
	
	
	
	
	
return 0;
}	