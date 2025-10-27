// 1512. Number of Good Pairs - Hash Map solution
// Time: O(n), Space: O(n)
// Approach: Create a hash map. The map will store the key and the value. Later, using the mathematical formula


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        
        
        for (int num : nums) {
            freq[num]++;
        }
        
        
        int pairs = 0;
        for (auto& pair : freq) {
            int count = pair.second;
            pairs += count * (count - 1) / 2;
        }
        
        return pairs;
    }
};

// However, there is also a more efficent way using just one loop and a smarter way to count the pairs without the formulas. 
