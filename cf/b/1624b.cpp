
#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ a.cpp -o a.exe ; .\a.exe

// powershell cmd to push into git:  git status; git add .; git commit -m "adding 1624b cf question from tle eliminator"; git push

// cmd prompt cmd to create a file and paste content to that directory:  copy a.cpp .\cf\b\1624b.cpp

void solve()
{
 int a , b,c;
 cin>>a>>b>>c;
    if( (2*b -c )>0 and ((2*b -c)%a) ==0 ){
        cout<<"YES\n";
    }
    else if (((a + c) % (2 * b)) == 0 )
    {
        cout<<"YES\n";
    }
    else if ((2*b -a)>0 and (2 * b - a) % (c) == 0)
    {
        cout<<"YES\n";
    }
    else cout<<"NO\n";
 
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

*/