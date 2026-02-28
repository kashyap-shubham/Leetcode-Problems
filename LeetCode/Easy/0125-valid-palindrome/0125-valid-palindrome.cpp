class Solution {
public:
    bool isPalindrome(string s) {


        // first principle approach
        // string cleanString = "";
        
        // for (char c : s) {
        //     if (isalnum(c)) {
        //         cleanString += tolower(c);
        //     }
        // }

        // string rev = cleanString;
        // reverse(rev.begin(), rev.end());

        // return cleanString == rev;


        // optimal approach
        int left = 0, right = s.length()-1;

        while (left < right) {

            if (!isalnum(s[left])) {
                left++;
                continue;
            }
            
            if (!isalnum(s[right])) {
                right--;
                continue;
            }

            if(tolower(s[left]) != tolower(s[right]))
            return false;

            left++;
            right--;

        } 

        return true;       
    }
};