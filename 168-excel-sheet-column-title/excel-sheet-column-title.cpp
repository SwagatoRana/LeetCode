class Solution {
public:
    string convertToTitle(int columnNumber) {
        int temp = columnNumber;
        string s = "";
        while(temp != 0) {
            temp--;
            cout << temp << " ";
            int rem = temp % 26;
            temp = temp / 26;
            char c = 'A' + rem;
            s = c + s;
            
        }
        return s;
    }
};