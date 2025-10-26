// Numbers of Good Pairs - Hash Map Solution
// Time: O(n), Space: O(k)
// Approach: Count frequencies using hash map, 

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int i : nums) {
            freq[i]++;
        }
        
        int totalPairs = 0; 
        for (auto& pair : freq) {
            int count = pair.second;
            totalPairs += count * (count - 1) / 2;  
        }
        return totalPairs; 
    }
};
