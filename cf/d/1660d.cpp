
#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ a.cpp -o a.exe ; .\a.exe

// powershell cmd to push into git:  git status; git add .; git commit -m "adding 1679a cf question from tle eliminator"; git push

// cmd prompt cmd to create a file and paste content to that directory:  copy a.cpp .\cf\d\1660d.cpp

void solve()
{
 string s,t;
 cin>>s>>t;
 unordered_map<char,bool> isCharPresent;
 int j=t.length()-1, n = s.length();
 for(int i =0; i< s.length(); i++){
     if (s[n - 1 - i] == t[j] and !isCharPresent[s[n - 1 - i]])
     {
         j--;
         if (j == -1)
         {
             cout << "YES\n";
             return;
         }
     }
     else if (s[n - 1 - i] == t[j] and isCharPresent[s[n - 1 - i]])
     {
        //  cout << "here" << endl;
         cout << "NO\n";
         return;
     }
    else isCharPresent[s[n-i-1]] = true;
 }
 
 cout << "NO\n";
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