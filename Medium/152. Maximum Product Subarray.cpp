class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxn = nums[0];
        int minn= nums[0];
        int pro = nums[0];

        for (int i = 1; i < nums.size(); i++){
            int temp = maxn;

            maxn = max({nums[i], maxn * nums[i], minn * nums[i]});
            minn = min({nums[i], temp * nums[i], minn * nums[i]});

            pro = max(pro, maxn);
        }
        return pro;
    }
};
