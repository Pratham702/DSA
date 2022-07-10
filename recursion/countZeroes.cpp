#include<bits/stdc++.h>
using namespace std;


int countZero(int n){
static int count;
	if (n!=0)
	{
		
		int m;
		m=n%10;
		if (m==0)
		{
			count++;

		}
		countZero(n/10);

	}
	
	return count;
}
int main(){
	
	int n;
	cin>>n;
	cout<<countZero(n);
}