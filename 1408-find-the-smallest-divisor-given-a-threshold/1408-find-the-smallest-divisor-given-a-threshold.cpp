class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1, right = *max_element(nums.begin(), nums.end());

        while (left < right) {
            int mid = left + (right - left) / 2;
            int total = 0;

            for (int num : nums) {
                total += (num + mid - 1) / mid;  // same as ceil(num / mid)
            }

            if (total > threshold)
                left = mid + 1;
            else
                right = mid;
        }

        return left;
    }
};
