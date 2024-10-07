//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& v){
        int n=v.size();
        vector<int> r(n,0);
        stack<int> s;
        for(int i=0;i<n;i++){
            while(!s.empty() && v[i]>v[s.top()]){
                int p=s.top();
                s.pop();
                r[p]=i-p;
            }
            s.push(i);
        }
        return r;
        
    }
};
