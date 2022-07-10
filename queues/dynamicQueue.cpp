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
	queueUsingArray(){
		capacity=2;
		data=new T[capacity];
    	 size=0;
    	 nextIndex=0;	
    	firstIndex=-1;
    	
    			
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
	T *newData=new T[2*capacity];
	int count=0;
	for (int i = firstIndex; i <capacity ; ++i)
	{
		newData[count]=data[i];
		count++;
	}

	
		for (int i = 0; i < firstIndex; ++i)
		{
			newData[count]=data[i];
			count++;
		}
	delete [] data;
	data=newData;
	nextIndex=capacity;
	firstIndex=0;
     capacity*=2;
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
	queueUsingArray<double> q;
	q.enqueue(4);	
    q.enqueue(34);	
    cout<<q.dequeue();
	q.enqueue(30);	
	q.enqueue(3);	
	q.enqueue(6);	
	cout<<q.dequeue();
	// q.enqueue(5);	
	// q.enqueue(0);	
	// q.enqueue(7);	
		



	

cout<< q.front()<<endl;





}	