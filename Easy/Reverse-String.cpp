class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        char temp;
        int start = 0;
        int end = n - 1;
        while (start <end){
            temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start ++;
            end--;
        }

    }
};
