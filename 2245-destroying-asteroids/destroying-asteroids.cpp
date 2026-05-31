class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long int m = mass;
        sort(asteroids.begin(), asteroids.end());
        int size = asteroids.size();
        for(int i = 0; i < size; i++) {
            if(asteroids[i] > m) return false;
            m += asteroids[i];
        }
        return true;
    }
};