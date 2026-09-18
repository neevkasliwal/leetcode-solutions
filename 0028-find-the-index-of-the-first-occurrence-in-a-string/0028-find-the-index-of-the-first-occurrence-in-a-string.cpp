class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.length();
        int n = needle.length();
        for(int i = 0; i<= m - n;i++){
            int j;
            for(j = 0 ; j < n; j++){
                if(needle[j]!= haystack[i+j]){
                    break;
                }
            }
            if(j == n){
                return i;
            }
        }
        return -1;
    }
};