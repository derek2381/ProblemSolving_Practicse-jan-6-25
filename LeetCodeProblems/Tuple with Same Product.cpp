// Problem Link
// https://leetcode.com/problems/tuple-with-same-product/description/

// Source Code

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        map<int, int> mp;
        int res = 0;

        for(int i = 0;i < nums.size();i++){
            for(int j =i+1;j < nums.size();j++){
                int prod = nums[i]*nums[j];

                res += 8*mp[prod];
                mp[prod]++;
            }
        }
        return res;
    }
};