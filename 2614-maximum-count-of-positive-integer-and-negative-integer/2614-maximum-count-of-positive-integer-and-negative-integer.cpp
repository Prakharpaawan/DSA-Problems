class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int low = 0, high = nums.size() - 1, mid, neg = nums.size();
        while (low <= high) {
            mid = (low + high) / 2;
            if (nums[mid] < 0) {
                low = mid + 1;
            } else {
                neg = mid;
                high = mid - 1;
            }
        }
        int pos = nums.size();
        low = 0;
        high = nums.size() - 1;
        while (low <= high) {
            mid = (low + high) / 2;
            if (nums[mid] > 0) {
                pos=mid;
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        return max(neg, (int)nums.size() - pos);

    }
};
