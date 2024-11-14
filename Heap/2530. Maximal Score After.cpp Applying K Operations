//Time Complexity: O(nlogn + klogn)
//Space Complexity: O(n)


class Solution {
public:
    long long maxKelements(vector<int>& n, int k) {
        priority_queue<int> p;
        long long c=0;
        int temp;
        for(int i:n){
            p.push(i);
        }

        for(int i=0;i<k;i++){
            temp=p.top();
            p.pop();
            c+=temp;
            if(temp%3==0){
                temp=temp/3;
            }
            else{
                temp=temp/3+1;
            }
            p.push(temp);
        }
        return c;
    }
};
