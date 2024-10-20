class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto it = unique (nums.begin(), nums.end());
        nums.erase(it,nums.end());
        int k=nums.size();
        return k;
    }
};