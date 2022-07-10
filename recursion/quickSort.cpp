#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int s,int e){

	int pivot=a[s];
	int count=0;
	for (int i = s+1; i <=e; ++i)
	{
		if (pivot>=a[i])
		{
			count++;
		}
	}

    int pivotIndex=s+count;
	swap(a[pivotIndex],a[s]);
    int i=s;
    int j=e;	
	while(i<pivotIndex && j>pivotIndex){

		while(a[i]<=pivot){
			i++;
		}
		while(a[j]>pivot){
			j--;
		}
		if (i<pivotIndex && j>pivotIndex)
		{
			swap(a[i++],a[j--]);
		}
	}
	return pivotIndex;
}

void quickSort(int a[],int s,int e){
	

	if (s>=e)
	{
		return;
	}
	int p=partition(a,s,e);

quickSort(a,s,p-1);
quickSort(a,p+1,e);

}





int main(){
	int a[5]={4,3,2,6,8};
	quickSort(a,0,4);
	for (int i = 0; i < 5; ++i)
	{
		cout<<a[i]<<" ";
	}
	
}	
