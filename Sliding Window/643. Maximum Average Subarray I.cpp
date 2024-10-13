//Time Complexity: O(n)
//Space Complexity: O(1)


class Solution {
public:
    double findMaxAverage(vector<int>& n, int k) {
        double c=INT_MIN,d=0;
        for(int i=0;i<k;i++){
            d+=n[i];
        }
        c=d/k;
        for(int i=k;i<n.size();i++){
            d-=n[i-k];
            d+=n[i];
            if(d/k>c){
                c=d/k;
            }
        }
        return c;
    }
};
