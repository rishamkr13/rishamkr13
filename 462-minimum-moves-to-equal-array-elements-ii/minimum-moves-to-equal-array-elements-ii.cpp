class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i =0;
        int j = nums.size()-1;
        int count=0;
        
            int mid = i + (j-i)/2;
            while(i<mid){
                count+=nums[mid]-nums[i];
                i++;    
            }
            while(j>mid){
                count+=nums[j]-nums[mid];
                j--;
            }
        return count;
    }
};