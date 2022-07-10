#include<bits/stdc++.h>
using namespace std;

void reverseArray(int a[],int size,int p){
    int s=p+1;
    int e=size-1;
	while(s<=e){
		swap(a[s],a[e]);
		s++;
		e--;
	}	
	
}

int main(){
	
	int a[6]={4,3,2,6,8,9};
	int p;
	cin>>p;
	reverseArray(a,6,p);
	for (int i = 0; i < 6; ++i)
	{
		cout<<a[i]<<" ";
	}
	
}	