#include<bits/stdc++.h>
using namespace std;

bool toFind(int a[],int n,int f){
	if (n!=0)
	{
		if (a[n-1]==f)
		{
			return true;
		}
       toFind(a,n-1,f);
	}
	else{
		return false;
	}
}

int main(){
	
	int n,f;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
    cin>>f;
    cout<<toFind(a,n,f);
}