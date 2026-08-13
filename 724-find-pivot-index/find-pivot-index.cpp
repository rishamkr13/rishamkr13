class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> v1(nums.size());
        vector<int> v2(nums.size());
        v1[0]=nums[0];
        v2[nums.size()-1]=nums[nums.size()-1];
        for(int i =1;i<nums.size();i++){
            v1[i] = v1[i-1] + nums[i];
        }
        for(int i =nums.size()-2;i>=0;i--){
            v2[i]=v2[i+1]+nums[i];
        }
        int i =0;
        int j =0;
        while(i<v1.size() || j<v2.size()){
            if(v1[i]==v2[j]) return i;
            else{
                i++;
                j++;
            }
        }
        return -1;
    }
};