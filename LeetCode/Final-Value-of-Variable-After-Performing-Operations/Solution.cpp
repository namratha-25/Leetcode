1class Solution {
2public:
3    int finalValueAfterOperations(vector<string>& operations) {
4        int res = 0;
5        for(int i = 0;i<operations.size();i++)
6        {
7            if(operations[i] == "X++" || operations[i] == "++X")
8            res++;
9            else if(operations[i] == "X--" || operations[i] == "--X")
10            res--;
11        }
12        return res;
13    }
14};