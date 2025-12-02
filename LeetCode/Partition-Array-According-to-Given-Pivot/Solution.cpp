1class Solution {
2public:
3    vector<int> pivotArray(vector<int>& nums, int pivot) {
4        vector<int> res;
5        int cnt = 0;
6        for(int i=0;i<nums.size();i++)
7        {
8            if(nums[i]<pivot)
9            res.push_back(nums[i]);
10            if(nums[i]==pivot)
11            cnt++;
12        }
13        
14        while(cnt--)
15        {
16            res.push_back(pivot);
17        }
18        for(int i = 0;i<nums.size();i++)
19        {
20            if(nums[i]>pivot)
21            res.push_back(nums[i]);
22        }
23        return res;
24    }
25};