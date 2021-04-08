class Solution {
public:
    int maximum69Number (int num) {
        string res = to_string(num);
        for(int i=0;i<res.length();i++){
            if(res[i]=='6'){
                res[i]='9';
                break;
            }
        }
        int res1 = stoi(res);
        return res1;
    }
};