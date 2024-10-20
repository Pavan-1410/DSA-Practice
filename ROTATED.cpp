class Solution {
public:
    bool check(vector<int>& nums) {
        int brk = 0;
        int n = nums.size();
        for(int i = 0; i< n; i++)
        {            
            // there would be at most 1 bp
            if(nums.at(i) > nums.at((i+1)% nums.size()))
                brk++;

        }
        if(brk > 1)
            return false;
        else
            return true;
    }
};