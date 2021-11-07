/*
Leetcode link->
https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
Main idea->
1)Only minimum element is the ele,ent smaller than it's previous one in rotated sorted array
2)If mid is greater than last element then we search in left half or ese iin right half
*/
class Solution {
public:
    int findMin(vector<int>& nums) {
       int low=0,high=nums.size()-1,mid;
       if(high==low) return nums[low];
       while(high-low>1)
       {
            mid=(high+low)/2;
           if(nums[mid]<nums[mid-1])
               return nums[mid];
           else if(nums[mid]<nums[high]) high=mid-1;
           else low=mid+1;
       }
        return (nums[low]<nums[high])? nums[low]: nums[high]; 
    }
};
