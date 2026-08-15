class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> st={'a','e','i','o','u','A','E','I','O','U'};
        int i =0;
        int j =s.size()-1;
        while(i<j){
            while(i<j && st.find(s[i])==st.end()) i++;
            while(i<j && st.find(s[j])==st.end()) j--;
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};