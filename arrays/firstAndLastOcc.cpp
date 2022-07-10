#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int x=firstIndex(nums,target);
        int y=lastIndex(nums,target);
        v.push_back(x);
        v.push_back(y);
        return v;
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
	vector<int> v={2,2};

    cout<<s.searchRange(v,2)[0]<<endl;
        cout<<s.searchRange(v,2)[1]<<endl;

}	
