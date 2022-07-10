#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int a[],int size){
//using recursion

// if (size==0)
// {
// 	return;
// }
// 	for (int i = 1; i <=size; ++i)
// 	{
		
// 		if (a[i-1]>a[i])
// 		{
// 			int temp;
// 				temp=a[i-1];
// 				a[i-1]=a[i];
// 				a[i]=temp;
// 		}
// 	}
// 	bubbleSort(a,size-1);
	   for (int i = 1; i <=size; ++i)
    {
    	bool swapped=false;
        for(int j=0;j<size-i;j++){

        if (a[j]>a[j+1])
        {
            int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapped=true;
        }
    }
    if (swapped==false)
    {	
    	break;//hence we optimised code for already sorted array to O(n)
    }
    }
}

int main(){
	
	int a[2]={1,2};
	bubbleSort(a,2);
	for (int i = 0; i < 2; ++i)
	{
		cout<<a[i]<<" ";
	}
	
}	