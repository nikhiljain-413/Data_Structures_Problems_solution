string s1 = "abcfeh";
    string s2 = "abefh";
    int n = s1.length();
    int m = s2.length();
    memset(t,-1,sizeof(t));
    cout<<lcs(s1,s2,n,m)<<endl;

    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }