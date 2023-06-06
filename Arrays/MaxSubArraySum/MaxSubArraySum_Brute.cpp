#include<bits/stdc++.h>
using namespace std;

//write logic

  int maxSubArray(vector<int>& nums) {
    int max_sum = nums[0];
    for(int i =0;i<nums.size();i++){
      int current_sum = nums[i];
      max_sum = max(current_sum,max_sum);
      for(int j=i+1;j<nums.size();j++){
        current_sum = current_sum+nums[j];
        max_sum = max(current_sum,max_sum);
      }
    }
        return max_sum;
    }


int main(){
	//take necessary input's
    vector<int>nums = {5,4,-1,7,8};
    cout<<"The max sum subarray sum is "<<maxSubArray(nums);
	return 0;
}