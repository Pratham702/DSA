#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int s,int e){
	int mid=s+(e-s)/2;

	int len1= mid-s+1;
	int len2= e-mid;

	int *one=new int[len1];
	int *two =new int[len2];

   int k=s;
	for (int i = 0; i < len1; ++i)
	{
		one[i]=a[k];
		k++;
	}
	k=mid+1;
	for (int i = 0; i < len2; ++i)
	{
		two[i]=a[k];	
		k++;
	}
    int l=s;
    int i=0,j=0;
	while(i<len1 && j<len2){
		if (one[i]>two[j])
		{
			a[l]=two[j];
			l++;
			j++;
		}else
		{
			a[l]=one[i];
			l++;
			i++;
		}
	}

	 while(i<len1){
	 	a[l++]=one[i++];
	 }
	 while(j<len2){
	 	a[l++]=two[j++];
	 }
}
void mergeSort(int a[],int s,int e){
	if (s>=e)		
	{
		return;
	}
int mid=s+(e-s)/2;

	mergeSort(a,s,mid);
	mergeSort(a,mid+1,e);

	merge(a,s,e);
}
int main(){
	int a[5]={3,5,2,1,7};
	mergeSort(a,0,4);
	for (int i = 0; i < 5; ++i)
	{
		cout<<a[i]<<" ";
	}
}	