/*
Leetcode link->
https://leetcode.com/problems/find-peak-element/
*/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0,high=nums.size()-1,mid;
        if(low==high) return low;
        while(high-low>1)
        {
            mid=(low+high)/2;
            if(nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1])
                return mid;
            else if(nums[mid]>nums[mid+1]&&nums[mid]<nums[mid-1])
                high=mid-1;
            else low=mid+1;
        }
       if(nums[low]>nums[high]) return low;
        else return high;
    }
};
