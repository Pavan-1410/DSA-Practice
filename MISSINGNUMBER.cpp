class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long sum = (n * (n + 1) / 2);
        long cursum = 0;

        for(auto i:nums)
            cursum = cursum + i;

        int missing = sum - cursum;
        return missing;
    }
};