// Leetcode Link -> https://leetcode.com/problems/search-in-rotated-sorted-array/
/*
There is an integer array nums sorted in ascending order (with distinct values).
Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
You must write an algorithm with O(log n) runtime complexity.
*/
// In Pivoted Arrays, we need to find the index at which it is pivot and perform BS for the 2 sub arrays divided by pivot
// using Binary search considering that pivot is the only element which is greater than it's next element in a sorted array
class Solution {
public:
    int binarySearch(vector<int> &nums,int low, int high,int target)
    {
       int mid;
        while(high-low>1)
        {
            mid=(high+low)/2;
            if(nums[mid]==target) return mid;
            if(nums[low]<=nums[mid])
            {
                if(nums[low]<=target&&nums[mid]>target)
                    return binarySearch(nums,low,mid-1,target);
                return binarySearch(nums,mid+1,high,target);
            }
            if(target>nums[mid]&&target<=nums[high])
                return binarySearch(nums,mid+1,high,target);
             return binarySearch(nums,low,mid-1,target);
        }
        if(nums[low]==target) return low;
        if(nums[high]==target) return high;
        return -1;
    }
    int search(vector<int>& nums, int target) {
        return binarySearch(nums,0,nums.size()-1,target);
    }
};
