#include <bits/stdc++.h>
using namespace std;
// void sum(int a[],int size); //we can write a[] or *a both are same as when a[] this is acting like pointer
void sum(int a[],int size){
	// cout<<sizeof(a)<<endl;//4 as this is pointer which created while taking argument
	int sum=0;
	for (int i = 0; i < size; ++i)
	{
		sum+=a[i];
	}
	cout<<sum<<endl;
}
int main(){

	int a[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<sizeof(a)<<endl;//40
	sum(a,10);
	sum(a+3,7);//we can pass the range for the sum in an array
}