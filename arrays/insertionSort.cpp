#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[],int n){


	for (int i = 1; i < n; ++i)
	{
		int temp=a[i];
		int j=i-1;
		for (; j >=0; j--)
		{
			if (a[j]>temp)
			{
				//shift
				a[j+1]=a[j];
			}
			else{
				break;
			}
		}
		a[j+1]=temp;
	}
}
int main(){
	

	int a[5]={4,3,2,6,8};
	insertionSort(a,5);
	for (int i = 0; i < 5; ++i)
	{
		cout<<a[i]<<" ";
	}
	}