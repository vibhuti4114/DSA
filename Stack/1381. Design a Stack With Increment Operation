//Time Complexity: O(1) for push and pop O(min(k, c)) for increment(k, val)
//Space Complexity: O(k)

class CustomStack {
public:
int k,c=0;
vector<int> a;
    CustomStack(int maxSize) {
        k=maxSize;
    }
    
    void push(int x) {
        if(c<k){
            a.push_back(x);
            c++;
        }
    }
    
    int pop(){
        if(c>0){
            c--;
            int p=a[c];
            a.pop_back();
            return p;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        for(int i=0;i<k;i++){
            if(i==c){
                break;
            }
            a[i]+=val;
        }
        
    }
};
