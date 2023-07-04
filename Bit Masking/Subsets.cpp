link: https://leetcode.com/problems/subsets/

--------------------------------------- my solution ---------------------------------------------------

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int size=nums.size();
        int maskNumber=1<<size;
        vector<vector<int>>ans;
        for(int i=0;i<maskNumber;i++)
        {
            vector<int>subset;
            for(int j=0;j<size;j++)
            {
                if(i & (1<<j)) 
                {
                    subset.push_back(nums[j]);
                }
            }
            ans.push_back(subset);
        }
        return ans;
    }
};
