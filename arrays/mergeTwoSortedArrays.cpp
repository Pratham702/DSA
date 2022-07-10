#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int m,int b[],int n,int c[]){
	int i=0,j=0,k=0;
	while(i<m&&j<n){
		if (a[i]<b[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}else{
			c[k]=b[j];
			k++;
			j++;
		}
	}

	while(i<m){
		c[k]=a[i];
		k++;
			i++;
	}
	while(j<n){
		c[k]=b[j];
		k++;
			j++;
	}
}
int main(){
	
	int a[4]={2 ,7, 9, 10};
	int b[3]={2 ,4 ,6 };
    int c[7];
	
	merge(a,4,b,3,c);
	for (int i = 0; i < 7; ++i)
	{
		cout<<c[i]<<" ";
	}
}	