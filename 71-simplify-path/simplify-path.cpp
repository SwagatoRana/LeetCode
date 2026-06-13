class Solution {
public:
    string simplifyPath(string path) {
        int size = path.size();
        vector<string> stack(size);
        int top = -1, i = 0;
        while(i < size) {
            if(path[i] == '/') {
                i++;
            }
            else if(path[i] == '.') {
                int sum = 0;
                string s = "";
                while(i < size && path[i] != '/') {
                    s += path[i];
                    sum++, i++;
                }
                if(sum == 1) {
                    continue;
                }
                else if(sum == 2 && top >= 0 && path[i - 1] == '.') {
                    top--;
                }
                else if(sum == 2 && path[i - 1] != '.') {
                    top++;
                    stack[top] = s;
                }
                else if(sum > 2) {
                    top++;
                    stack[top] = s;
                }
            }
            else {
                string s = "";
                while(i < size && path[i] != '/') {
                    s += path[i];
                    i++;
                }
                top++;
                stack[top] = s;
            }
        }
        string ans = "";
        if(top == -1) {
            ans = "/";
        }
        for(int i = 0; i <= top; i++) {
            ans += '/' + stack[i];
        }
        return ans;
    }
};