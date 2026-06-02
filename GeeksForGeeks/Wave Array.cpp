class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // code here
        int n = arr.size();
        int temp;
        for(int i = 0; i < n - 1; i = i+2){
            
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            

            }
        


    }
};
