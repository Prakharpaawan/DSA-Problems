class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0, high=n-1;
        while(low<=high) {
            int mid=low+(high-low)/2;
            if(target==nums[mid]){
                return true;
            }
            if(nums[mid] == nums[low] && nums[mid] == nums[high]) {
            high--;
            low++;
            }
            //left sorted
            else if (nums[low]<=nums[mid]) {
                if(nums[low]<=target && target<=nums[mid]) {
                    high = mid-1;
                }
                else{
                    low=mid+1;
                }

            }
            //right sorted 
            else {
                if(target>=nums[mid] && nums[high]>=target) {
                    low=mid+1;
                }
                else {
                    high=mid-1;
                }

            }
        } 
        return false;  
    }
};
        