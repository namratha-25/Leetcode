1class Solution {
2public:
3    int alternatingSum(vector<int>& nums) {
4        int se = 0, so = 0;
5        for(int i = 0;i<nums.size();i++)
6        {
7            if(i%2==0)
8            se+=nums[i];
9            else
10            so+=nums[i];
11        }
12        return se-so;
13    }
14};