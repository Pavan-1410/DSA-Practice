class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int max = -1, secmax;
        
        for(int i = 0; i < arr.size(); i++)
        {
            if (arr.at(i) > max)
            {
                secmax = max;
                max = arr.at(i);
            }
            //if there's a no. less than max, greater than second max,
            else if(arr.at(i) > secmax && arr.at(i) < max)
            {
                secmax = arr.at(i);
            }
        }
        
        return secmax;
        
    }
};