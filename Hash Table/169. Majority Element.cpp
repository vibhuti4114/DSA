//Time Complexity: O(n)
//Space Complexity: O(n)


class Solution {
public:
    int majorityElement(vector<int>& n) {
        int size=n.size();
        unordered_map<int,int> m;
        for(int x:n){
            m[x]++;
            if(m[x]>size/2){
                return x;
            }
        }
        return -1;
    }
};
