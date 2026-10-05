class Solution {
public:
    bool matching(char a , char b){
        return((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
    }
    bool isValid(string s) {
        stack<char> str;

        for(char x : s){
            if(x == '(' || x == '[' || x == '{') str.push(x);

            else{
                if(str.empty()== true) return false;
                if(matching(str.top(),x) == false){
                    return false;
                }
                else{
                    str.pop();
                }
            }
        }
        return (str.empty()== true);
        
    }
};