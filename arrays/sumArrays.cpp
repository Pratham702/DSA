#include<bits/stdc++.h>
using namespace std;
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
       // Write your code here.
    int x=0,y=0,z=0;
    for(int i=1;i<=n;i++){
        x+=a[i-1]*pow(10,n-i);
    }
     for(int i=1;i<=m;i++){
        y+=b[i-1]*pow(10,m-i);
    }
    z=x+y;
    vector<int> arr;
  int c=0;
    while(z!=0){
        int l=z;
        l=l%10;
        arr.push_back(l);
        c++;
        z=z/10;
        
    }
    vector<int> r;
    for(int i=1;i<=c;i++){
        r.push_back(arr[c-i]);
    }
    return r;
}
int main(){
    vector<int> a={4,5,1};
    vector<int> b={3,4,5};
    int m=a.size();
    int n=b.size();
    vector<int> l=findArraySum(a,m,b,n);
    for (int i = 0; i < l.size(); ++i)
    {
        cout<<l[i]<<" ";
    }
    
}   
