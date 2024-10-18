//Time Complexity: O(n+m)
//Space Complexity: O(n)

class Solution {
public:
    int numJewelsInStones(string j, string s) {
        unordered_set<char> a(j.begin(),j.end());
        int c=0;
        for(char st:s){
            if(a.count(st)){
                c++;
            }
        }
        return c;
    }
};
