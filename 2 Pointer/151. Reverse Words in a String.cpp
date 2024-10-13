//Time Complexity: O(n)
//Space Complexity: O(n)


class Solution {
public:
    string reverseWords(string s) {
        int st=0,end=0,n=s.length(),k=0;
        string res;
        reverse(s.begin(),s.end());
        while(end<n){
            if(s[st]==' '){
                st++;
            }
            if(s[end]!=' ' && (end+1==n || s[end+1]==' ')){
                if(!res.empty()){
                    res+=' ';
                }
                res+=string(s.begin()+st,s.begin()+end+1);
                reverse(res.end()-(end-st+1),res.end());
                end++;
                st=end;
            }
            else
            end++;
        }
        return res;
    }
};
