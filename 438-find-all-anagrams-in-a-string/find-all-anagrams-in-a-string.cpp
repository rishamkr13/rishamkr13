class Solution {
public:
    
   
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;
        if(s.size()<p.size()){
            return {};
        }
        sort(p.begin(),p.end());
        vector<int> a(26,0) ,b(26,0);
        for(auto i : p){
            b[i-'a']++;
        }
         int k = p.size();
        for(int i =0;i<s.size();i++){
           a[s[i]-'a']++;
           if(i>=k)
                a[s[i-k]-'a']--;

            if(a==b){
                ans.push_back(i-k+1);
            }
        }
return ans;
    }
};