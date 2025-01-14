class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Normalize k to ensure it doesn't exceed the array size
        vector<int> temp(k);

        // Store the last k elements in temp
        for (int i = 0; i < k; i++) {
            temp[i] = nums[n - k + i];
        }

        // Shift the first n-k elements to the right
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }

        // Place the elements from temp back at the beginning
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};
