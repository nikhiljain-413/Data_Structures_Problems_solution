class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>> v(101, vector<double> (101,0.0));
        v[0][0] = poured;
        bool flag = false;
        for(int i=1;i<101;i++){
            for(int j=0;j<i;j++){
                if(v[i-1][j]>1){
                    v[i][j] += (v[i-1][j]-1)/2.0;
                    v[i][j+1] += (v[i-1][j]-1)/2.0;
                    v[i-1][j] = 1;
                }
                if(i-1==query_row && j==query_glass){
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
        return v[query_row][query_glass];
    }
};