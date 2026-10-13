
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

        int i = 1;
        int j = x / 2;
        int ans = 0;

        while (i <= j) {
            int m = i + (j - i) / 2;

            if (m <= x / m) {
                ans = m;
                i = m + 1;
            }
            else {
                j = m - 1;
            }
        }

        return ans;
    }
};
