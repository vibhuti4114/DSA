//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    string removeStars(string p) {
        stack<char> s;
        string result;
        int i=1;
        for(char ch:p){
            if(s.empty()){
                s.push(ch);
            }
            else if(ch=='*'){
                s.pop();
            }
            else{
                s.push(ch);
            }
        }
        while(!s.empty()){
            result+=s.top();
            s.pop();
        }
        reverse(result.begin(),result.end());
        return result;
        
    }
};
