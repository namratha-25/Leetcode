1class Solution {
2public:
3    bool judgeCircle(string moves) {
4        int x=0,y=0;
5        for(int i = 0;i<moves.size();i++)
6        {
7            if(moves[i] == 'U')
8            y++;
9            else if(moves[i] == 'D')
10            y--;
11            else if(moves[i] == 'R')
12            x++;
13            else if(moves[i] == 'L')
14            x--;
15            
16        }
17        if(x==0 && y==0)
18        return true;
19        else return false;
20    }
21};