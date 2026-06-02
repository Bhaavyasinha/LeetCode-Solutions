class Solution {
  public:
    int maxProduct(vector<int> arr) {
        // code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int p1 = arr[n-1] * arr[n-2] * arr[n-3];
        int p2 = arr[0] * arr[1] * arr[n-1];
        
        return max(p1,p2);
      
        
    }
};
