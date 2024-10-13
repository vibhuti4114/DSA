//Time Complexity: O(n)
//Space Complexity: O(1)


class Solution {
public:
    bool isSubsequence(string s, string t) {
        int st=0;
        for(char ch:t){
            if(ch==s[st]){
                st++;
            }
        }
        if(st==s.length()){
            return true;
        }
        else
        return false;
    }
};
