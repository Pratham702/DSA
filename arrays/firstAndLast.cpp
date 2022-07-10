#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    pair<int,int> firstAndLastIndex(int a[],int size,int key){
   pair<int,int> p;
   p.first=firstIndex(a,size,key);
   p.second=lastIndex(a,size,key);
   return p;
   
}
    int firstIndex(vector<int>& nums,int key){
   
   int start=0;
   int end=nums.size()-1;
   int ans=-1;
   while(start<=end){
      int mid=start+(end-start)/2;
     if (nums[mid]==key)
     {
     	ans=mid;
     	end=mid-1;

     }

      if (nums[mid]<key)
     {
     	start=mid+1;
     }else{
     	end=mid-1;
     }
   }

return ans;
}
int lastIndex(vector<int>& nums,int key){
  
   int start=0;
   int end=nums.size()-1;
   int ans=-1;
   while(start<=end){
     int mid=start+(end-start)/2;
     if (nums[mid]==key)
     {
     	ans=mid;
     	start=mid+1;
     }

      if (nums[mid]<key)
     {
     	start=mid+1;
     }else{
     	end=mid-1;
     }
   }

return ans;
}
};

int main(){

	Solution s;
	int a[7]={1,5,5,5,6,8,9};
    cout<<s.firstAndLastIndex(a,7,5).first<<endl;
        cout<<s.firstAndLastIndex(a,7,5).second<<endl;
}