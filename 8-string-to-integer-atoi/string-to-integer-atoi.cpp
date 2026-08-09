class Solution {
public:
    int myAtoi(string s) {
        long long num =0;
        int i =0;
        while(i<s.size() && s[i]==' '){
            i++;
        }
        int sign=1;
        if(i<s.size() && s[i]=='-'){
            sign = -1;
            i++;
        }
        else if(i<s.size() && s[i]=='+'){
            i++;
        }

        while(i<s.size() && isdigit(s[i])){
            num = num* 10 + s[i]-'0';
            if( num * sign > INT_MAX){
                return INT_MAX;
            }
            if(num * sign < INT_MIN){
                return INT_MIN;
            }
            i++;
        }
        return sign * num;

        
    }
};