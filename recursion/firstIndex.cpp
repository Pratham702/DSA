#include<bits/stdc++.h>
using namespace std;


int first(int a[],int n,int f){

if (n>=0)
{
     static int k=0
	if (a[0]==f)
	{
		return k;
	}
	else{
		k++;
	first(a+1,n-1,f);
	
}
	return -1;
  
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int f;
	cin>>f;
	cout<<first(a,n,f);
}	