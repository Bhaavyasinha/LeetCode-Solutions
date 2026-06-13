class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
        vector<int> output;
        int n1 = a.size();
        int n2 = b.size();
        int n3 = c.size();
        int i = 0, j = 0, k = 0;
        
        while (i < n1 && j < n2 && k < n3) {
            if (a[i] == b[j] && b[j] == c[k]) {
                if (output.empty() || output.back() != a[i]) {
                    output.push_back(a[i]);
                }
                i++;
                j++;      
                k++;
            }
            else {
                int smallest = min({a[i], b[j], c[k]});
                
                if (a[i] == smallest) i++;
                if (b[j] == smallest) j++;
                if (c[k] == smallest) k++;
            }
        }
        return output;
    }
};
