// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        unsigned long long int st, end, mid;
        st = 1;
        end = n;
        while(st!=end){
            mid = (st+end)/2;
            if(isBadVersion(mid)){
                end = mid;
            }
            else{
                st = mid+1;
            }
        }
          return st;
    }
  
};
