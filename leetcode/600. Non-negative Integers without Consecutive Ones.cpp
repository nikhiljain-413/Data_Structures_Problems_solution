class Solution {
public:
    int findIntegers(int n) {
        vector<int> fact(32,0);
        //fact[0] is taken 1 by observing fact pattern
        //we can calculate fact[1] and fact[2]
        //by considering fact[1] assuming we have only one bit so 1 or 0 can be come so 2 options are there
        //and for fact[2] we have 2 bits so 10,01,00 three possibility
        // and calculating fact[3] means we have 3 bit so ans is 5
        //and so on for fact[4] = 8. so ficonaci pattern is observed
        fact[0] = 1;
        fact[1] = 2;
        fact[2] = 3;
        for(int i=3;i<32;i++){
            fact[i] = fact[i-1] + fact[i-2];
        }
        int prev_bit = 0;
        int cnt = 31;
        int ans = 0;
        while(cnt>=0){
            if((1<<cnt) & n){
                ans += fact[cnt];
                if(prev_bit) return ans;
                prev_bit = 1;
            }else{
                prev_bit = 0;
            }
            cnt--;
        }
        return ans+1;
    }
};