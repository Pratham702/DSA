#include<bits/stdc++.h>
using namespace std;

int pivotIndex(int a[],int size){
	int s=0;
     int e=size-1;
     while(s<e){
     	int mid=s+(e-s)/2;
     	if (a[mid]>=a[0])
     	{
     		s=mid+1;
     	}
     	else{
     		e=mid;
     	}
     }
     return s;
}

int main(){
	
	int a[5]={3,8,10,17,1};
	cout<<"pivot Index :"<<pivotIndex(a,5)<<endl;
	
}	