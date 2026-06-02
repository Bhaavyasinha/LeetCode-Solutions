class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // code here
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int max3 = INT_MIN;
        
        if (arr.size() <= 2){
            return -1;
        }
        
        for (int i = 0; i < arr.size(); i++){
            if (arr[i] > max1){
                max3 = max2;
                max2 = max1;
                max1 = arr[i];
            }
            
            else if (arr[i] > max2){
                max3 = max2;
                max2 = arr[i];
            }
            
            else if (arr[i] > max3){
                max3 = arr[i];
            }
        }
        
        if (max3 == INT_MIN){
            return -1;
        }
        else 
        return max3;
    }
};
