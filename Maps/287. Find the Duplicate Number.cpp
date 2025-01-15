287. Find the Duplicate Number - :

Given an array of integers nums containing n + 1 integers 
where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and using only constant extra space.


// Example 1:
// Input: nums = [1,3,4,2,2]
// Output: 2
  
// Example 2:
// Input: nums = [3,1,3,4,2]
// Output: 3
  
// Example 3:
// Input: nums = [3,3,3,3,3]
// Output: 3
 

// Constraints:

// 1 <= n <= 105
// nums.length == n + 1
// 1 <= nums[i] <= n
// All the integers in nums appear only once except for
// precisely one integer which appears two or more times.



  
M-1 -: By Using Extra Space -: 

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto ele:nums){
            mp[ele]++;
        }
        for(auto ele:mp){
            if(ele.second>1){
                return ele.first; 
            }
        }
        return 0;
    }
};




M-2 -: Without Using Extra Space -: 


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            int correctidx=nums[i];
            if(nums[correctidx]==nums[i]) return nums[i];
            else swap(nums[correctidx],nums[i]);
        }
        return 100;
    }
};

