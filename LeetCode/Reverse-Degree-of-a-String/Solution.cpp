1class Solution {
2public:
3    int reverseDegree(string s) {
4        int sum = 0;
5        for(int i = 0;i<s.size();i++)
6        {
7            sum+=(26-(s[i]-'a'))*(i+1);
8        }
9        return sum;
10    }
11};