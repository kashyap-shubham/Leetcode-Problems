class Solution {
public:
    bool isPalindrome(string s) {

        // first principle approach
        string cleanString = "";
        
        
        for (char c : s) {
            if (isalnum(c)) {
                cleanString += tolower(c);
            }
        }

        string rev = cleanString;
        reverse(rev.begin(), rev.end());

        return cleanString == rev;

        
    }
};