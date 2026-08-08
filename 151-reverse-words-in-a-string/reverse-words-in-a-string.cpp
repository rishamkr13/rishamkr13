class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string ans="";
        while(ss>>word){
            reverse(word.begin(),word.end());
            ans+=word+" ";
            word="";
        }
        ans.pop_back();
        reverse(ans.begin(),ans.end());
        return ans;
    }
};