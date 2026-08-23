class Solution {
public:
    int compress(vector<char>& chars) {
        int count =1;
        int k =0;
        for(int  i =1;i<=chars.size();i++){
            if(i<chars.size() && chars[i]==chars[i-1]){
                count++;
            }else{
                chars[k++]=chars[i-1];
                if(count>1){
                    string s = to_string(count);
                    for(auto i:s){
                        chars[k++]=i;
                    }
                }
                count=1;
            }
        }
        return k;

    }
};