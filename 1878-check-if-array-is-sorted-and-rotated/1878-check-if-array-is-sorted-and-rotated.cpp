class Solution {
public:
    bool check(vector<int>& nums) {
        int countBreak=0;
        for (int i=0;i<nums.size();i++) {
            if(nums[i]>nums[(i+1)%nums.size()]) {
                countBreak+=1;
            }
            if (countBreak >1 ) {
                return false;
            }
            
        }
        return true;
    }
};