class Solution {
  public:
    bool isPalindrome(string& s){
        int n = s.length();
        int j = n-1;
        for(int i = 0; i<n/2; i++){
            if(s[i] != s[n-i-1]){
                return false;
            }
        }
        return true;
    }
};