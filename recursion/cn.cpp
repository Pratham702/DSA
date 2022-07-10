
#include<bits/stdc++.h>
using namespace std;

int rakshaBandhan(vector < int > a, int n) {
    // Write your code here.
  map<int,int> m;
    int sum=0;
    for(int i=0;i<a.size();i++){
       
        sum+=a[i];
      m[sum]=i+1;
        
        }
   auto it=(--(m.end()));
    int l=it->second;
    return l ;
}
int main(){
  vector<int> a;
  a.push_back(1);
  a.push_back(-1);
  a.push_back(0);
  cout<<rakshaBandhan(a,a.size());
  
} 

