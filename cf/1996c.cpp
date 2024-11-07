    #include <bits/stdc++.h>
    using namespace std;
    void solve()
    {
        int n,q;
        cin>>n>>q;
        string a, b;
        cin>>a>>b;
        vector<vector<int>> mapA( n, vector<int>(26));
        vector<vector<int>> mapB( n, vector<int>(26));
        vector<int> temp(26,0);
        vector<int> temp2(26,0);
        for(int i =0; i<n ; i++){
            char ch = a[i];
            temp[ch-'a']++;
            mapA[i] = temp;
        }
        
        for (int i = 0; i < n; i++)
        {
            char ch = b[i];
            temp2[ch - 'a']++;
            mapB[i] = temp;
        }

        for(int i=0; i<q; i++){
            int l, r;
            cin>>l>>r;
            l--,r--;
            vector<int> aOccStart= mapA[l];
            vector<int> aOccEnd= mapA[r];
            vector<int> bOccStart= mapB[l];
            vector<int> bOccEnd= mapB[r];
            int ans =0;
            for( int i =0; i< 26; i++){
                int aCt = aOccEnd[i]-aOccStart[i];
                cout << i + 1 << aCt << endl;
                int bCt = bOccEnd[i]-bOccStart[i];
                if( aCt>bCt)ans+=(aCt-bCt);
            }
            cout<<"----"<<endl;
            // cout<<ans<<endl;
        }
        return;
    }

    int main()
    {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        int t = 1;
        cin >> t;
        while (t--)
        {
            solve();
        }
        return 0;
    }

    /*
    problem link :https://codeforces.com/problemset/problem/2002/A

    Status : unsolved


    */

