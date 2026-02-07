
#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ a.cpp -o a.exe ; .\a.exe

// powershell cmd to push into git:  git status; git add .; git commit -m "adding 1624b cf question from tle eliminator"; git push

// cmd prompt cmd to create a file and paste content to that directory:  copy a.cpp .\cf\a\1606a.cpp

void solve()
{
 string s;
 cin>>s;
 
 char x=s[0];
 int ct=0,ct2=0 , n = s.size();
 if (s[0] == s[n - 1])
 {
     cout << s << endl;
     return;
 }
 for( int i =0; i< s.size(); i++){
    if( x ==s[i]){
        ct++;
    }
    else{
        break;
    }
 }
 x=s[n-1];
 for (int i = 0; i < s.size(); i++)
 {
     if (x == s[n-1-i])
     {
         ct2++;
     }
     else
     {
         break;
     }
 }
 char lastCh = s[n-1], firstCh = s[0];
//  s[n-1]
 if( ct>=ct2){
    // for( int i =0; i< n; i++){
    //     if(lastCh==s[n-1-i]){
    //         s[n-i-1]=firstCh;
    //     }
    //     else break;
    // }
    s[n-1] = firstCh;
 }
 else 
 {
    //  for (int i = 0; i < n; i++)
    //  {
    //      if (firstCh == s[ i])
    //      {
    //          s[i] = lastCh;
    //      }
    //      else
    //          break;     
    //  }
    s[0] = lastCh;
 }
//  cout<<ct<<" "<<ct2<<endl;
//  cout<<lastCh<<firstCh<<endl;
 cout<<s<<endl;


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