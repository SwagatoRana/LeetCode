class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int msize = magazine.size(), rsize = ransomNote.size();
        map<char, int> count;
        for(int i = 0; i < msize; i++) {
            count[magazine[i]]++;
        }
        for(int i = 0; i < rsize; i++) {
            if(count[ransomNote[i]] > 0) {
                count[ransomNote[i]]--;
            }
            else {
                return false;
            }
        }
        return true;
    }
};