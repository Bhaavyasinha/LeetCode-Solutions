class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int max0 = 0;
        int count0 = 0;
        int max1 = 0;
        int count1 = 0;
       for (int i = 0; i < arr.size(); i++){
    if (arr[i] == 0){
        count0++;
        count1 = 0;           // Reset count1 because sequence broke
        if (count0 > max0){
            max0 = count0;
        }
    }
    else {  // arr[i] == 1
        count1++;
        count0 = 0;           // Reset count0 because sequence broke
        if (count1 > max1){
            max1 = count1;
        }
    }
}
        
    return max(max0, max1);

    }
};
