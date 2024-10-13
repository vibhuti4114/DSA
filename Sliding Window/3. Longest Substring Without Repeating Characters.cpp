//Time Complexity: O(n)
//Space Complexity: O(min(n,m)) n is length of string and m is size of character set

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int a=0;
        int st=0,en=0;
        set<char> b;
            for(en;en<s.size();){
                auto x=b.find(s[en]);
                if(x==b.end()){
                    if(en-st+1>a){
                        a=en-st+1;
                    }
                    b.insert(s[en]);
                    en++;
                }
                else{
                    b.erase(s[st]);
                    st++;
                }
            }
        return a;
    }
};
