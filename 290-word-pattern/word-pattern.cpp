class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string word;
        vector<string> ans;
        while(ss >> word){
            ans.push_back(word);

        }
        unordered_map<char,string> mp1;
        unordered_map<string,char> mp2;
        if(pattern.size() !=ans.size() ) return false;
        int i =0;
        int j =0;
        while(i<pattern.size() ){
            if(mp1.find(pattern[i])!=mp1.end()){
                if(mp1[pattern[i]]!=ans[i]){
                    return false;
                }
            }else{
                mp1[pattern[i]]=ans[i];
            }
            if(mp2.find(ans[i])!=mp2.end()){
                if( mp2[ans[i]]!=pattern[i]){
                    return false;
                }

            }else{
                mp2[ans[i]]=pattern[i];
            }
            i++;

        }
        return true;
    }
};