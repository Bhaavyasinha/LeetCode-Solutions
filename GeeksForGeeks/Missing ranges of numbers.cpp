class Solution {
  public:
    vector<vector<int>> missingRanges(vector<int> &arr, int lower, int upper) {
        // Code here
        int n =  arr.size();
        vector<vector<int>> output;
        int start = lower;
        for (int i = 0; i < n; i++){
            
            if (arr[i] > start){
                int upper1 = arr[i] - 1;
                output.push_back({start, upper1});
            }
            start = arr[i] + 1;
        
        }
        
         if (start <= upper){
            output.push_back({start, upper});
         }
        return output;
    }
};
