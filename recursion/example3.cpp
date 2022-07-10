#include <bits/stdc++.h>
using namespace std;

void increment(int **p){
  (*p)++;
}

int main(){
 int num = 10;
 int *ptr = &num;
 cout<<&num<<endl;
 cout<<ptr<<endl;
 increment(&ptr);
 // cout << num << endl;
 cout<<ptr<<endl;

}