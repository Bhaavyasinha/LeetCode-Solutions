class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        vector<int> output;
        int i = 0, j = 0;
        int n1 = a.size(), n2 = b.size();
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        while (i < n1 && j < n2){
            if (a[i] < b[j]){
                if (output.empty() || output.back() != a[i]){
                    output.push_back(a[i]);
                }
                i++;
            }
            
            else if (b[j] < a[i]){
                if (output.empty() || output.back() != b[j]){
                    output.push_back(b[j]);
                }
                j++;
            }
            else{
                if (output.empty() || output.back() != a[i]){
                    output.push_back(a[i]);
                }
                i++;
                j++;
            }
        }
        while(i < n1){
                if (output.empty() || output.back() != a[i]){
                    output.push_back(a[i]);
                }
                i++;
            }
            while ( j < n2){
                if (output.empty() || output.back() != b[j]){
                    output.push_back(b[j]);
                }
                j++;
            }
        return output;
    }
};
