class Solution {
public:
    int firstBadVersion(int n) {
        int i=1 ,j=n;
        while(i<j){
            int m = (j-i)/2 + i;
            if(isBadVersion(m)) j= m;
            else i = m+1;
        }
        return i;
    }
};