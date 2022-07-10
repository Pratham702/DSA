#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int size,int key){
   
   int start=0;
   int end=size-1;
   
   while(start<=end){
     int mid=(start+end)/2;
     if (a[mid]==key)
     {
     	return mid;
     }

      if (a[mid]<key)
     {
     	start=mid+1;
     }else{
     	end=mid-1;
     }
   }

return -1;
}
int main(){
	
	int a[5]={1,5,6,8,9};
    cout<<binarySearch(a,5,9)<<endl;
}	