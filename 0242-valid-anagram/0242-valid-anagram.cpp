class Solution {
public: 
    
    bool isAnagram(string s, string t) {
        const int SIZE = 256;
        int count[SIZE] = {0};
        if(s.length() != t.length()){
            return false;
        }
        for(int i = 0; i<s.length();i++){
            count[s[i]]++;
            count[t[i]]--;
        }
        for(int i = 0;i < SIZE ; i++){
            if(count[i]!=0){
                return false;
            }
        }
        return true;
        
    }
};