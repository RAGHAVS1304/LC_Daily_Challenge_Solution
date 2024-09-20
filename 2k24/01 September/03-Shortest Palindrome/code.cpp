class Solution {
public:
    string shortestPalindrome(string s) {
        string rev=s;
        int n=s.size();
        reverse(rev.begin(), rev.end());
        for(int i=0;i<s.size();i++){
            if(!memcmp(s.c_str(), rev.c_str()+i, n-i)){
                return rev.substr(0, i)+s;
            }
        }
        return "";

    }
};