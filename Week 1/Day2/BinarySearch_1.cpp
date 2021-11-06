// Leetcode Link-> https://leetcode.com/problems/binary-search/
/* Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
 You must write an algorithm with O(log n) runtime complexity.*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high=nums.size()-1,low=0,mid;
        while(high-low>1)
        {
         mid=(high+low)/2;
         if(nums[mid]==target) return mid;
         else if(nums[mid]<target) low=mid+1;
         else high=mid-1;
        }
        if(nums[low]==target) return low;
        if(nums[high]==target) return high;
        return -1;
    }
};
