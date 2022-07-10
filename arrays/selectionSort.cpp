#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[],int size){

	for (int i = 0; i < size; ++i)
	{
		for (int j = i+1; j < size; ++j)
		{
			if (a[i]>a[j])
			{
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;

			}
		}
	}
}
int main(){
	
	int a[5]={4,3,2,6,8};
	selectionSort(a,5);
	for (int i = 0; i < 5; ++i)
	{
		cout<<a[i]<<" ";
	}
	
}	