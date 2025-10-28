// 290. Word Pattern - Hash Map Solution
// Time: O(n), Space: O(n)
// Approach: Count frequencies using hash map 

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> char_to_word;
        unordered_map<string, char> word_to_char;
        
        
        vector<string> words;
        string current_word = "";
        
        for (char c : s) {
            if (c == ' ') {
                words.push_back(current_word);
                current_word = "";
            } else {
                current_word += c;
            }
        }
        words.push_back(current_word);  
        
        if (pattern.size() != words.size()) {
            return false;
        }
        
        
        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string w = words[i];
            
            
            if (char_to_word.count(c)) {
                if (char_to_word[c] != w) {
                    return false;
                }
            }
            
            
            if (word_to_char.count(w)) {
                if (word_to_char[w] != c) {
                    return false;
                }
            }
            
            
            char_to_word[c] = w;
            word_to_char[w] = c;
        }
        
        return true;
    }
};
