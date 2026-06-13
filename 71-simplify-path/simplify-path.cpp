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
            else {
                string s = "";
                while(i < size && path[i] != '/') {
                    s += path[i++];
                }
                if(s == ".") {
                    continue;
                }
                else if(s == "..") {
                    if(top >= 0) top--;
                }
                else {
                    top++;
                    stack[top] = s;
                }
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