//Time Complexity: O(nlog⁡n)
//Space Complexity: O(n)


class Solution {
public:
    int minGroups(vector<vector<int>>& i) {
        sort(i.begin(),i.end());
        priority_queue<int> p;

        for(auto x:i){
            int start=x[0];
            int end=x[1];

            if(!p.empty() && p.top()<start){
                p.pop();
                p.push(end);
            }
            else{
                p.push(end);
            }
        }
        return p.size();
        
    }
};
