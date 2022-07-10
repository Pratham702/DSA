#include<bits/stdc++.h>
using namespace std;
template<typename T>
class stackUsingArray
{
	T * data;
	int nextIndex;
	int capacity;
public:
	stackUsingArray(){
		nextIndex=0;
		
		capacity=4;
		data=new T[capacity];
	}
	int size(){
		return nextIndex;
	}
	bool isEmpty(){
		return nextIndex==0;
	}

	void push(int element){
		if (capacity==nextIndex)
		{

			T *newData= new T[2*capacity];
			for (int i = 0; i < capacity; ++i)
			{
				newData[i]=data[i];
			}
			capacity*=2;
			delete [] data;
			data=newData;

			
			
		}
		data[nextIndex]=element;
		nextIndex++;
}
	T pop(){
		if (isEmpty())
		{
				cout<<"stack is empty"<<endl;
				return INT_MIN;
		}
		nextIndex--;
			return data[nextIndex-1];

	}
	T top(){
		if (isEmpty())
		{
				cout<<"stack is empty"<<endl;
				return INT_MIN;
		}
		return data[nextIndex-1];
	}
};
int main(){
	stackUsingArray<int> s;
	s.push(23);
	s.push(5);
		s.push(5);

	s.push(50);

	s.push(62);

	s.push(50);


	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.top()<<endl;
}