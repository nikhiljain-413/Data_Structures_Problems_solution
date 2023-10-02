
class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int cnt = 0;
        for(int k=1;2*n>(k-1)*k;k++){
            int numerator = n- ((k-1)*k/2);
            int denomenator = k;
            if(numerator % denomenator==0) cnt++;
        }
        return cnt;
    }
};