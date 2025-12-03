1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4
5        vector<int> ans;
6        int n = matrix.size();
7        int m = matrix[0].size();
8        int top = 0,left = 0;
9        int right = m-1,bottom = n-1;
10
11        while(top<=bottom && left<=right)
12        {
13            //Printing top
14            for(int i = left;i<=right;i++)
15            {
16                ans.push_back(matrix[top][i]);
17            }
18            top++;
19
20            //Printing Right
21            for(int i = top;i<=bottom;i++)
22            {
23                ans.push_back(matrix[i][right]);
24            }
25            right--;
26
27            //Printing Bottom
28            if(top<=bottom)
29            {
30                for(int i = right;i>=left;i--)
31                {
32                    ans.push_back(matrix[bottom][i]);
33                }
34                bottom--;
35            }
36
37            //Printing left
38            if(left<=right)
39            {
40                for(int i = bottom;i>=top;i--)
41                {
42                    ans.push_back(matrix[i][left]);
43                }
44                left++;
45            }
46        }
47        return ans;
48    }
49};