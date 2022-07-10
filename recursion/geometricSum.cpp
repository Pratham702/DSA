#include<bits/stdc++.h>
using namespace std;

double geometric(int n){

  if (n==0)
  {
  	return 1;
  }
  		
	return (1/pow(2,n)+geometric(n-1));
}

int main(){
	
	int n;
	cin>>n;
	cout<<geometric(n);
}