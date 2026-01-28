
#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ a.cpp -o a.exe ; .\a.exe

void solve()
{
 int n ;
 cin>>n;
 vector<int> nums(n);
 for( int i =0;i <n ; i++){
    cin>>nums[i];
 }
 if( nums.size()%2==0){
    cout<<2<<endl;
    cout<<1<<" "<<n<<endl;
    cout<<1<<" "<<n<<endl;
 }
 else {
     cout << 4 << endl;
     cout << 1 << " " << n-1 << endl;
     cout << 1 << " " << n-1 << endl;
     cout << n-1 << " " << n  << endl;
     cout << n- 1 << " " << n  << endl;
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
 nums = [1 ,3, 4]
 NUMS = [5,5,5]

 001
 011
 100
 110
    

*/