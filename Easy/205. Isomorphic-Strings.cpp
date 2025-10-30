// 205. Isomorphic Strings - Two hash maps for bidirectional mapping
// Time: O(n), Space: O(1)
// Approach: Creating a Bi-directional hash map and checking the strings.
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> s_to_t;
        unordered_map<char, char> t_to_s;
        
        for (int i = 0; i < s.size(); i++) {
            char char_s = s[i];
            char char_t = t[i];
            
           
            if (s_to_t.count(char_s) && s_to_t[char_s] != char_t) {
                return false;
            }
              
            if (t_to_s.count(char_t) && t_to_s[char_t] != char_s) {
                return false;
            }
            
            
            s_to_t[char_s] = char_t;
            t_to_s[char_t] = char_s;
        }
        return true;
    }
};
