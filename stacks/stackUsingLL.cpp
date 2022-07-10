#include<bits/stdc++.h>
using namespace std;

template <typename T>
class node
{
public:
	T data;
	node<T> *next;

	node(T data){
		this->data=data;
		next=NULL;
	}
	
	
};
template<typename T>
class Stack{
	node<T>* head;
	int size;
public:
	Stack(){
		head=NULL;
		size=0;
	}
	int getSize(){
		return size;
	}
	bool isEmpty(){

		return getSize()==0;
	}
	void push(T element){
		node<T> * newNode=new node<T>(element);
		newNode->next=head;
		head=newNode;
		size++;
	}
	T pop(){
		if (isEmpty())
		{
			return 0;
		}
		node<T> * ans=head;
		node<T> * temp=head;
		head=head->next;
		delete temp;
		size--;
		return ans->data;
	}
	T top(){
		return head->data;
	}
};
int main()
{
	Stack<int> s;
	s.push(34);
	s.push(4);
	s.push(8);
	cout<<s.top();
}	