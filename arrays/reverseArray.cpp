#include<bits/stdc++.h>
using namespace std;

void reverseArray(int a[],int size){
    int s=0;
    int e=size-1;
	while(s<=e){
		swap(a[s],a[e]);
		s++;
		e--;
	}
	
}

int main(){
	
	int a[6]={4,3,2,6,8,9};
	reverseArray(a,6);
	for (int i = 0; i < 6; ++i)
	{
		cout<<a[i]<<" ";
	}
	
}	