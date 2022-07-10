#include<bits/stdc++.h>
using namespace std;

class dynamicArray
{
	int capacity;
	int nextIndex;
	int *data;
public:
	 dynamicArray(){
      data=new int[5];
      nextIndex=0;
      capacity=0;
	 }

	 dynamicArray(dynamicArray &a){
	 	// this->data=a.data; //shallow copy
	 	this->data=new int[a.capacity];
	 	for (int i = 0; i < a.nextIndex; ++i)
	 	{
	 		this->data[i]=a.data[i];
	 	}
	 	this->nextIndex=a.nextIndex;
	 	this->capacity=a.capacity;

	 	
	 }
	void add(int element){
		if (nextIndex==capacity)
		{
			int *newData=new int[2*capacity];
			for (int i = 0; i < capacity;i++ 	)
			{
				newData[i]=data[i];
					
			}
			delete [] data;
			data=newData;
			capacity*=2;
		}
		data[nextIndex]=element;
		nextIndex++;
	}

	int get(int i){
    if (i>nextIndex)
    {
    		return -1;
    }


		return data[i];
	}
	void add(int element,int i){

		if (i<nextIndex)
		{
				data[i]=element;
		}
		else if (i==nextIndex)
		{
				data[i]=element;
				nextIndex++;
		}
		else if (i>nextIndex)
		{
				return;
		}


	}
	void print(){
		for (int i = 0; i < nextIndex; ++i)
		{
			cout<<data[i]<<" ";
		}
	}
};
int main(){
	dynamicArray a;
	a.add(9);
	a.add(10);
	a.add(45);
	a.add(64);
	a.print();

	dynamicArray a1(a);
    a1.add(45,0);
    
cout<<endl;
a1.print();
    a.print();
	
}	