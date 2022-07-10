#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int n){

	if (n==0)
	{
		return 0;
	}

	 // return (a[0]+sum(a+1,n-1));
	return (a[n-1]+sum(a,n-1));
}
int main(){
	int a[5]={2,1,3,4,3};

	
    cout<<sum(a,5);
	
}