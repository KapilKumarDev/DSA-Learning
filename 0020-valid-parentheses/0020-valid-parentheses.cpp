class Solution {
public:
    bool isValid(string s) {
        vector<int> stack;
        int top = 0;
        int n = s.size();

        for(int i=0;i<n; i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                stack.push_back(s[i]);
                top++;
            }
            else if(top==0) return false;
            else if((s[i]==')' && stack[top-1]=='(') || (s[i]==']' && stack[top-1]=='[') || (s[i]=='}' && stack[top-1]=='{')){
                stack.pop_back();
                top--;
            }
            else return false;
        }
        return(!top);
    }
};