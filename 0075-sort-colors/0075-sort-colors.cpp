class Solution {
public:
    void sortColors(vector<int>& nums) {
        int countRed=0, countWhite=0, countBlue=0;
        for (int i=0;i<nums.size();i++) {
            if(nums[i]==0) countRed++;
            else if(nums[i]==1) countWhite++;
            else countBlue++;
        }

        for(int i=0;i<countRed;i++) nums[i] = 0;
        for(int i=countRed;i<countWhite+countRed;i++) nums[i] = 1;
        for(int i=countWhite+countRed;i<nums.size();i++) nums[i] = 2;
        
    }
};