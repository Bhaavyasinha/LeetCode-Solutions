class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     unordered_set<int> vec;    \\ using hash mapping for an optimum code.
     for (int i = 0; i < nums.size();i++){  
        int current = nums[i];  \\ storing the value in a container called current.
        if (vec.count(nums[i])){  \\ if that container already contains the value.
            return true;  \\ return true (container and the map both have that value so it contains duplicates.
        }
        vec.insert(current);
     }
     return false;
    }
};
