/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            int maxL = 0, left = 0, right = 0;
            unordered_set<char> charSet;
    
    
            while(right < s.size()){
                if(charSet.find(s[right])== charSet.end() ){
                    charSet.insert(s[right]);
                    maxL = max(maxL, right - left + 1);
                    right++;
                }else{
                    charSet.erase(s[left]);
                    left++;
                }
            }
            return maxL;
        }
    };
// @lc code=end

