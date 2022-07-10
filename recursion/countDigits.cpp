#include<bits/stdc++.h>
using namespace std;


int digit(int n){
	static int count;
	if (n!=0)
	{
 
 digit(n/10);
 count++;
	}
   
	
	return count;
   
	
	
}
int main(){
	
int n;
cin>>n;
cout<<digit(n);
	
}