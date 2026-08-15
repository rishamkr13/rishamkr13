class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26]={};
        for(auto i :magazine){
            freq[i-'a']++;
        }
        for(auto i:ransomNote){
            freq[i-'a']--;
            if(freq[i-'a']<0) return false;
        }
        return true;
    }
};