// Majority Element - Hash Map Solution
// Time: O(n), Space: O(n)
// Approach: Count frequencies using hash map, 
// then find element with count > n/2

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        
        int majority = nums.size() / 2;
        for (auto& pair : freq) {
            if (pair.second > majority) {
                return pair.first;
            }
        }
        return 0;
    }
};

//Boyer-Moore Voting Algorithm will work much faster than hash map 
