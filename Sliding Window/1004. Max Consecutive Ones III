//Time Complexity: O(n)
//Space Complexity: O(1)


class Solution {
public:
    int longestOnes(vector<int>& v, int k) {
        int start=0,end=-1,c=0,zero=0,n;
        n=v.size();
        while(end<n-1){
            if(zero<k || v[end+1]==1){
                end++;
                if(v[end]==0){
                    zero++;
                }
            }
            else if(zero==k && v[end+1]==0){
                if(v[start]==0){
                    zero--;
                }
                start++;
            }
            if(c<end-start+1){
                c=end-start+1;
            }
        }
        return c;
    }
};
