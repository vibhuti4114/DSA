//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    int evalRPN(vector<string>& v) {
        stack<int> s;
        int k,f;
        for(int i=0;i<v.size();i++){
            if(v[i]=="+"){
                k=s.top();
                s.pop();
                f=s.top();
                s.pop();
                s.push(f+k);
            }
            else if(v[i]=="-"){
                k=s.top();
                s.pop();
                f=s.top();
                s.pop();
                s.push(f-k);
            }
            else if(v[i]=="*"){
                k=s.top();
                s.pop();
                f=s.top();
                s.pop();
                s.push(f*k);
            }
            else if(v[i]=="/"){
                k=s.top();
                s.pop();
                f=s.top();
                s.pop();
                s.push(f/k);
            }
            else{
                s.push(stoi(v[i]));
            }
        }
        return s.top();
    }
};
