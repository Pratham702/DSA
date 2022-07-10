#include<bits/stdc++.h>
using namespace std;

bool isSorted(int a[],int size){
	if (size==0||size==1)	
	{
		return true;
	}
	if (a[0]>a[1])
	{
		return false;
	}
	bool isSmallSorted=isSorted(a+1,size-1);
	return isSmallSorted;
}

int main(){
	
int a[5]={2,1,3,4,5};
	if (isSorted(a,5))
	{
		cout<<"yes"<<endl;
	}
else 
	cout<<"no"<<endl;
	
}