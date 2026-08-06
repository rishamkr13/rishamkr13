class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i : nums1){
            mp[i]++;

        }
        for(int i=0;i<nums2.size();i++){
            if(mp.find(nums2[i])!=mp.end()){
                ans.push_back(nums2[i]);
                mp[nums2[i]]=0;
            }   
        }
        unordered_set<int> s(ans.begin(),ans.end());
        vector<int> a(s.begin(),s.end());
        return a;
    }
};