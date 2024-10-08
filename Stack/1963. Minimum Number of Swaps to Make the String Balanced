//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    int minSwaps(string s) {
        stack <int> v;
        int c=0;
        for(int i=0;i<s.length();i++){
            if(v.empty()){
                v.push(s[i]);
                if(s[i]=='['){
                    c++;
                }
            }
            else if(v.top()=='[' && s[i]==']'){
                v.pop();
                c--;
            }
            else{
                v.push(s[i]);
                if(s[i]=='[')
                c++;
            }
        }
        return (c+1)/2;
    }
};
