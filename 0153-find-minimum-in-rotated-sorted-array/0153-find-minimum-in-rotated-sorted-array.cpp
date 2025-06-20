class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low=0, high=n-1;
        while (low<=high) {
            int mid=low+(high-low)/2;
            if(nums[low] <= nums[high]) {
                return nums[low];
            }
            else if (mid>0 && nums[mid]<nums[mid-1]){
                return nums[mid];
            }
            else if (nums[low]<=nums[mid]) {
                low = mid+1;
            }
            else {
                high=mid-1;
           }
        }
        return -1;
    }
};