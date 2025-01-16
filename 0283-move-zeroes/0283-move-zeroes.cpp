class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>temp;
        for(int i=0;i<nums.size(); i++) {
            if(nums[i] != 0) {
                temp.push_back(nums[i]);
            }
        }
        int x=temp.size();
        for(int i =0;i<x;i++) {
           nums[i]= temp[i];
        }

        for(int i=x;i< nums.size();i++)
        nums[i]=0;
    }
};