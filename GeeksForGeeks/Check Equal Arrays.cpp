class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        int n1 = a.size();
        int n2 = b.size();
        if(n1 != n2){
            return false;
        }
        else{
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            for (int i = 0; i < n1; i++){
                if (a[i] != b[i]){
                    return false;
                }
            }
            return true;
        }
    }
};
