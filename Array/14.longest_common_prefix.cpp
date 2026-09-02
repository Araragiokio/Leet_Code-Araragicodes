#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string common = strs[0];
        for (int i = 1; i < strs.size(); i++)
        {
            string temp = "";
            int n = min(common.size(), strs[i].size());
            for (int j = 0; j < n; j++)
            {
                if (common[j] == strs[i][j])
                {
                    temp = temp + common[j];
                }
                else
                {
                    break;
                }
            }
            
            common = temp;
        }    
        return common;
    }
};