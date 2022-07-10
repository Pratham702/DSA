#include<bits/stdc++.h> 
using namespace std;

template <typename T>
class queueUsingArray
{
	    T *data;
	    int size;
    	int nextIndex;	
    	int firstIndex;
    	
    	int capacity;
public:
	queueUsingArray(int totalSize){
		data=new T[totalSize];
    	 size=0;
    	 nextIndex=0;	
    	firstIndex=-1;
    	
    	capacity=totalSize;		
}
	
	int getSize(){
		return size;
	}
	bool isEmpty(){
		return size==0;
	}

void enqueue(T element){

     if (size==capacity)
{
	cout<<"queue is full"<<endl;
	return;
}
data[nextIndex]=element;
nextIndex=  (nextIndex+1) % capacity;


if (firstIndex==-1)
{
	firstIndex++;
}
size++;
	}
	T front(){
		if (isEmpty())
		{
			cout<<"queue is empty"<<endl;
			return 0;
		}
		return data[firstIndex];
	}
	T dequeue(){
		if (isEmpty())
		{
			cout<<"queue is empty"<<endl;
			return 0;
		}
		T ans=data[firstIndex];
		firstIndex=(firstIndex+1)%capacity;
		size--;
		return ans;
	}
};
int main(){
	queueUsingArray<double> q(5);
	q.enqueue(4);	
    q.enqueue(34);	
	q.enqueue(34);	
	q.enqueue(34);	
	q.enqueue(34);	
	q.dequeue();	



	

cout<< q.front()<<endl;





}	