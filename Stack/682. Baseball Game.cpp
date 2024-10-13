//Time Complexity: O(n)
//Space Complexity: O(n)


class Solution {
public:
    int calPoints(vector<string>& v) {
        stack<int> s;
        int c=0,d,k;
        for(int i=0;i<v.size();i++){
            if(v[i]=="D"){
                c+=2*s.top();
                s.push(2*s.top());
            }
            else if(v[i]=="C"){
                c-=s.top();
                s.pop();
            }
            else if(v[i]=="+"){
                d=s.top();
                s.pop();
                k=s.top()+d;
                s.push(d);
                s.push(k);
                c+=k;
            }
            else{
                c+=stoi(v[i]);
                s.push(stoi(v[i]));
            }

        }
        return c;
    }
};
