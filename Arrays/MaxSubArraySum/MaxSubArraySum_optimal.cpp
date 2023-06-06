#include<bits/stdc++.h>
using namespace std;

//write logic
  int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int current_sum = max_sum;
        for(int i=1;i<nums.size();i++){
            current_sum= max(current_sum+nums[i],nums[i]);
            max_sum = max(current_sum,max_sum);
        }
        return max_sum;
    }


int main(){
	//take necessary input's
    vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<"The max sum subarray sum is "<<maxSubArray(nums);
	return 0;
}