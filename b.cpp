#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ b.cpp -o a.exe ; .\a.exe
// powershell cmd to push into git:  git status; git add .; git commit -m "adding a few cf question"; git push

void solve()
{
    int n , x;
    cin>>x>>n;
    cout<<x<<" ";
    for( int i =1; i<= n; i++){
        if (x % 2 == 1)
        {
            x += i;
        }
        else x-=i;
        cout<<x<<" ";
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
