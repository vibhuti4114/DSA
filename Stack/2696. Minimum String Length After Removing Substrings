//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    int minLength(string s) {
        stack<char> p;
        for(char x:s){
            if(p.empty()){
                p.push(x);
            }
            else if(p.top()=='A' && x=='B'){
                p.pop();
            }
            else if(p.top()=='C' && x=='D'){
                p.pop();
            }
            else{
                p.push(x);
            }

        }
        return p.size();
        
    }
};
