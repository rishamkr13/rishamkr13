class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;

        int i =0;
        int j =0;
        int maxi=0;
        int count=0;
        while(j<s.size()){
            if(mp.find(s[j])==mp.end()){
                count++;
                maxi = max(count, maxi);
                mp[s[j]]++;

            }else {
                while(mp[s[j]]>0){
                    mp[s[i]]--;
                    i++;
                    count--;
                }
                mp[s[j]]++;
                count++;

                 maxi = max(count, maxi);
            }
            j++;
        }
        return maxi;
        
    }
};