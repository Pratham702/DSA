#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int x=firstIndex(nums,target);
        int y=lastIndex(nums,target);
        v.push_back(x);
        v.push_back(y);
        int z=v[1]-v[0];
        return z;
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

      else if (nums[mid]<key)
     {
     	start=mid+1;
     }
     else if(nums[mid]>key){
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

     else if (nums[mid]<key)
     {
     	start=mid+1;
     }
     else if(nums[mid]>key){
     	end=mid-1;
     }
   }

return ans;
}
};
int main(){
	
	Solution s;
	vector<int> v={1, 5 , 8 ,8,8,8,9};

    cout<<s.searchRange(v,8)+1<<endl;;

}	
