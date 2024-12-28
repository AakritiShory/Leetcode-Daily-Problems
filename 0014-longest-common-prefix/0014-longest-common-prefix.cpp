class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        // Sort the array
        sort(strs.begin(), strs.end());
        
        // Take the first and last strings in the sorted array
        string first = strs[0];
        string last = strs[strs.size() - 1];
        
        // Find the common prefix between the first and last string
        int i = 0;
        while (i < first.size() && i < last.size() && first[i] == last[i]) {
            i++;
        }
        
        // The common prefix is the substring from 0 to i in the first string
        return first.substr(0, i);
    }

        
    
};