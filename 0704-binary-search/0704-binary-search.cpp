class Solution {
    int binarysearch(vector<int>& nums, int target, int high, int low) {
        if(low>high) return -1;
        int mid = low + (high-low)/2;
        if(nums[mid]==target) return mid;
        if(nums[mid]>target) 
            return binarysearch(nums, target, mid-1, low);
        return binarysearch(nums, target, high, mid+1);
    }
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        return binarysearch(nums, target, high, low);
    }
};