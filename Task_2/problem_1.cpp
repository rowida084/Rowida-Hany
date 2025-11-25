class Solution {
    string result(string s){
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i] =='#'){
                if(res.size()>0)
                res.pop_back();
            }
            else{
                res.push_back(s[i]);
            }
        }
        return res;
    }
public:
    bool backspaceCompare(string s, string t) {
        return (result(s)==result(t));
    }
};
