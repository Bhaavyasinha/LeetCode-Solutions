// Happy Number - Hash Map solution 
// Approach: Use hash set to detect cycles, Calculate digit squares sum repeatedly, Return true if reach 1, false if cycle detected.
// Time: O(log n), Space: O(log n)

class Solution {
public:
    bool isHappy(int n) {
        unordered_set <int> happy;

        while (n != 1){
            int sum = 0;
            while (n > 0){
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;

            }
            if (happy.count(sum)) return false;
            happy.insert(sum);
            n = sum;
        }
        return true;
        
    }
};
