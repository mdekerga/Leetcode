/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int> m;
    
            for(int i = 0; i < nums.size();i++){
                int complement = target - nums[i];
                if(m.find(complement) != m.end()){
                    return {m[complement],i};
                }
                m[nums[i]] = i;
            }
            return {};
        }
    };
// @lc code=end

