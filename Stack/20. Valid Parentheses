//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    bool match(char a, char c){
        return((a == '(' && c == ')') || (a=='{' && c=='}') || (a=='[' && c==']'));
    }
    bool isValid(string s) {
        stack<char> b;
        int k=1;
        bool a=0;
        for(int i=0;i<s.length();i++){
            if(s[i]== '(' || s[i]=='{' || s[i]=='['){
                b.push(s[i]);
            }
            else{
                if(b.empty() || !match(b.top(),s[i])){
                    k--;
                    break;
                }
                if(match(b.top(),s[i])){
                    b.pop();
                }
            }
        }
        if(k==1 && b.empty()){
            return a+1;
        }
        else{
            return a;
        }
        
    }
};
