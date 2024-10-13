//Time Complexity: O(logn)
//Space Complexity: O(1)

class Solution {
public:
    int search(vector<int>& n, int t) {
        int c=-1;
        int mid,start=0,end=n.size()-1;
        for(int i=0;i<n.size();i++){
            mid=(start+end)/2;
            if(n[mid]==t){
                c=mid;
                break;
            }
            else if(n[end]==t){
                c=end;
                break;
            }
            else if(n[start]==t){
                c=start;
                break;
            }
            else if(t<n[mid]){
                end=mid-1;
            }
            else if(t>n[mid]){
                start=mid+1;
            }

        }
        return c;
    }
};
